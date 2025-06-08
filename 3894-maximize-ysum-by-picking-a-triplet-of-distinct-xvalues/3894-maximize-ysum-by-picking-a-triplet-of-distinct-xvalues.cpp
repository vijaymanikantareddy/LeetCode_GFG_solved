class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        unordered_map<int, int> mp;
        priority_queue<int> pq;
        for(int i = 0 ; i < x.size() ; i++){
            mp[x[i]] = max(mp[x[i]], y[i]);
        }
        if(mp.size() < 3) return -1;
        for(auto it: mp){
            pq.push(it.second);
        } 
        int res = 0;
        for(int i = 0 ; i < 3 ; i++){
            res += pq.top();
            pq.pop();
        }
        return res;
    }
};