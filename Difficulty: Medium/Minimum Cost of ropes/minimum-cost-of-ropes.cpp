class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<long long, vector<long long>, greater<long long>> pq(arr.begin(), arr.end());
        
        long long cost = 0;
        
        while(pq.size() > 1) {
            long long f = pq.top();
            pq.pop();
            
            long long s = pq.top();
            pq.pop();
            
            cost += (f+s);
            pq.push(f+s);
        }
        return (int) cost;
    }
};