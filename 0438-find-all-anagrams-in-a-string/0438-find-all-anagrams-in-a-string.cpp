class Solution {
public:
    bool fun(vector<int>& a, vector<int>& b){
        for(int i = 0 ; i < 26 ; i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.size() < p.size()) return res;
        vector<int> mp(26, 0);
        for(char ch: p) mp[ch - 'a']++;
        vector<int> fre(26, 0);
        for(int i = 0 ; i < p.size() ; i++){
            fre[s[i] - 'a']++;
        }
        if(fun(mp, fre)){
            res.push_back(0);
        }
        for(int i = p.size() ; i < s.size() ; i++){
            fre[s[i - p.size()] - 'a']--;
            fre[s[i] - 'a']++;
            if(fun(mp, fre)){
                res.push_back(i - p.size() + 1);
            }
        }
        return res;
    }
};