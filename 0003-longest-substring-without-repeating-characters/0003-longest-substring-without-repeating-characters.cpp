class Solution {
public:
    void removeChar(unordered_map<char, int>& mp, char ch){
        if(mp[ch] == 1){
            mp.erase(ch);
            return ;
        }
        mp[ch]--;
    }
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int res = 0;
        int l = 0, r = 0;
        while(r < s.size()){
            if(mp.find(s[r]) == mp.end()){
                mp[s[r]]++;
                res = res > (r - l + 1)? res: (r-l+1);
                r++;
            }else{
                while(s[l] != s[r]){
                    removeChar(mp, s[l++]);
                }
                removeChar(mp, s[l++]);
                mp[s[r++]]++;
            }
        }  
        return res;
    }
};