class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char, int> mp;
        for(auto it: words[0]) mp[it]++;
        for(int i = 1 ; i < words.size() ; i++){
            map<char, int> mp1;
            for(auto it: words[i]) mp1[it]++;
            
            for(auto &it: mp){
                mp[it.first] = min(mp1[it.first], it.second);
            }
        }
        vector<string> res;
        for(auto it: mp){
            for(int i = 0 ; i < it.second ; i++){
                string t = "";
                t.push_back(it.first);
                res.push_back(t);
            }
        }
        return res;
        
    }
};