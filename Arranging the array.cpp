class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
             vector<int> v;
            for(int i = 0;i<n;i++) {
                if(arr[i] >= 0)
                v.push_back(arr[i]);
            }
            int k = 0;
            for(int i = 0;i<n;i++) {
                if(arr[i] < 0)
                arr[k++] = arr[i];
            }
            int i = 0;
            while(k<n) {
                arr[k++] = v[i++];
            }
        }
};
