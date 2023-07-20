class Solution {
public:
    string res;
    void fun(string s, int l, int r){
        while(l >= 0 && r < s.size()){
            if(s[l] != s[r]){
                break;
            }
            if(res.size() < r-l+1)
                res = s.substr(l, r-l+1);
            l--;
            r++;
        }
    }
    string longestPalindrome(string s) {
        for(int i = 0 ; i < s.size() ; i++){
            fun(s, i, i);
            fun(s, i, i+1);
        }
        return res;
    }
};