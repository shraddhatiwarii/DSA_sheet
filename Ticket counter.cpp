class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        deque<int> ad;
     for (int i = 1; i <= N; i++) {
         ad.push_back(i);
     }
     int flag = 0;
     int curr = 0;
     while (!ad.empty()) {
         int time = 0;
         if (flag == 0) {
             while (!ad.empty() && time < K) {
                 curr = ad.front();
                 ad.pop_front();
                 time++;
             }
         } else {
             while (!ad.empty() && time < K) {
                 curr = ad.back();
                 ad.pop_back();
                 time++;
             }
         }
         flag =!flag;
    
}   
return curr;
    }
};
