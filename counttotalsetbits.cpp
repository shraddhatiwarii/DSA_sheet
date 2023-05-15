class Solution {
  public:
    long long countBits(long long N) {
        // code here
         long count = 0;
    for (int i = 1; i <= N; i++) {
        // Count the number of set bits in each number from 0 to N
        count += __builtin_popcount(i);
    }
    return count;
    }
};
