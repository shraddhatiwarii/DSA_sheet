class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        long long int ans=0;
        priority_queue<int> pq;
        for(int i=0;i<N;i++) pq.push(A[i]);
        while(K--){
            int temp=pq.top();
            ans+=temp;
            pq.pop();
            temp/=2;
            pq.push(temp);
        }
        return ans;
}
};
