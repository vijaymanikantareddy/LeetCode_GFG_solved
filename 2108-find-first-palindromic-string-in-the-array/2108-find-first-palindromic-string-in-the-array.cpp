class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string res = "";
        for(int i=0 ; i<words.size() ; i++){
            if(ispalin(words[i])){
                res = words[i];
                break;
            }
        }
        return res;
    }
    bool ispalin(string s){
        bool b = true;
        for(int i=0, j=s.size()-1 ; i<s.size()/2 ; i++, j--){
            if(s[i]!=s[j]){
                b = false;
            }
        }
        return b;
    }
};