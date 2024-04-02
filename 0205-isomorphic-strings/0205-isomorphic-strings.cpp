class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        set<char> se;
        for(int i = 0 ; i < s.size() ; i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = t[i];
                if(se.find(t[i]) != se.end()) return false;
                se.insert(t[i]);
            }else{
                if(mp[s[i]] != t[i]) return false;
            }
        }
        return true;
    }
};