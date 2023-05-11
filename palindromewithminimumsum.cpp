 int n = s.length();
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        if (s[left] != s[right] && s[left] != '?' && s[right] != '?')
            return -1;
        
        left++;
        right--;
    }

    left = 0;
    right = n - 1;
    std::string str;
    while (left <= right) {
        if (s[left] != '?')
            str += s[left];
        else if (s[right] != '?')
            str += s[right];

        left++;
        right--;
    }

    int res = 0;
    for (int i = 1; i < str.length(); i++) {
        res += 2*std::abs(str[i] - str[i - 1]);
    }

    return res;
    }
