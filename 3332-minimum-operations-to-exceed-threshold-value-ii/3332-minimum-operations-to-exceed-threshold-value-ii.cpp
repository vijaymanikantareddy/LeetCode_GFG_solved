class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<>> pq;
        for(auto it: nums) pq.push(it);
        int res = 0;
        while(!pq.empty() && pq.size() >= 2){
            long long a = pq.top();
            pq.pop();
            if(a >= k) break;
            long long b = pq.top();
            pq.pop();
            long long c = min(a, b) * 2 + max(a, b);
            pq.push(c);
            res++;
        }
        return res;
    }
};