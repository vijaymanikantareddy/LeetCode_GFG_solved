class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        for(char i: s){
            mp[i]++;
        }
        int res=0;
        bool set = true;
        for(auto it: mp)
        {
            if(it.second%2!=0 and set){
                res += it.second;
                set = false;
            }
            else if(it.second%2!=0)
                res += it.second-1;
            else res += it.second;
        }
        return res;
    }
};