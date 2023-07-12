class Solution {
public:
    string reverseOnlyLetters(string s) {
        string res;
        for(int i=0 ; i<s.size() ; i++){
            if(isalpha(s[i])){
                res.push_back(s[i]);
            }
        }
        reverse(res.begin(), res.end());
        string ans = "";
        int iter = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(!isalpha(s[i])){
                ans.push_back(s[i]);
            }else{
                ans.push_back(res[iter++]);
            }
        }
        return ans;
    }
};