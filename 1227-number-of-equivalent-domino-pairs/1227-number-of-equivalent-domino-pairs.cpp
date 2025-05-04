class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<string, int> mp;
        for(auto& it: dominoes){
            string s = "";
            sort(it.begin(), it.end());
            s = to_string(it[0])+" "+ to_string(it[1]);
            mp[s]++;
        }
        int res = 0;
        for(auto it: mp){
            int t = it.second;
            res += t * (t - 1) / 2;
        }
        return res;
    }
};