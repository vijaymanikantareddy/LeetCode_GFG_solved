class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> mp;
        for(auto it: paths){
            mp[it[0]] = it[1];
        }
        for(auto it: paths){
            if(mp.find(it[1]) == mp.end()){
                return it[1];
            }
        }
        return "";
    }
};