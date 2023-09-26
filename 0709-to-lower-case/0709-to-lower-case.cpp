class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0 ; i<s.size() ; i++){
            if(isupper(s[i]))
                s[i]=s[i]+32;
        }
        return s;
    }
};