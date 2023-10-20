class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string, int> mp;
        if(s.size() < 10) return {};
        for(int i = 0 ; i < s.size()-9 ; i++){
            mp[s.substr(i, 10)]++;
        }
        vector<string> ans;
        for(auto it: mp){
            if(it.second > 1) ans.push_back(it.first);
        }
        return ans;
    }
};