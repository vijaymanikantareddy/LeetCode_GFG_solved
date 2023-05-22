class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        vector<pair<int, int>> v;
        for(auto it: mp){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        vector<int> res;
        for(int i = 0 ; i < k ; i++){
            res.push_back(v[i].second);
        }
        return res;
    }
};