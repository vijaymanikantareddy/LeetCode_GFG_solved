class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        unordered_map<int, int> mp;
        for(auto it: arr){
            mp[it]++;
        }
        vector<pair<int, int>> v;
        vector<int> res;
        for(auto it: mp){
            v.push_back({it.second, it.first});
        }
        sort(v.rbegin(), v.rend());
        for(int i = 0 ; i < k ; i++){
            res.push_back(v[i].second);
        }
        return res;
    }
};
