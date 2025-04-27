class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        map<string, int> mp;
        int mx = 0;
        for(auto it: responses){
            unordered_set<string> se;
            for(auto s: it){
                se.insert(s);
            }
            for(auto ele: se){
                mp[ele]++;
                mx = max(mx, mp[ele]);
            }
        }
        for(auto it: mp){
            if(it.second == mx) return it.first;
        }
        return mp.begin()->first;
        
    }
};