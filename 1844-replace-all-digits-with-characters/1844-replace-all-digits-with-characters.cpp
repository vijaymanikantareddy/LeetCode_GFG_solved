class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]-'0'<10){
                s[i]=s[i-1]+s[i]-'0';
            }
        }
        return s;
    }
};