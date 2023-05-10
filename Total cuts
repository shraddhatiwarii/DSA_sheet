class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
         int count = 0;
    
     int maxLeft[N];
    maxLeft[0] = A[0];
    for (int i = 1; i < N-1; i++) {
        maxLeft[i] = max(maxLeft[i-1], A[i]);
    }

    int minRight[N];
    minRight[N-1] = A[N-1];
    for (int i = N-2; i > 0; i--) {
        minRight[i] = min(minRight[i+1], A[i]);
    }

    for (int i = 0; i < N-1; i++) {
        if (maxLeft[i] + minRight[i+1] >= K) {
            count++;
        }
    }
return count;
}
};
