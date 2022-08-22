class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(int i=0 ; i<s.size() ; i++){
            if(isalpha(s[i]) or isdigit(s[i])){
                res.push_back(tolower(s[i]));
            }
        }
        int l=0, r=res.size()-1;
        while(l<r){
            if(res[l]!=res[r])
                return false;
            l++;
            r--;
        }
        cout<<res;
        return true;
    }
};