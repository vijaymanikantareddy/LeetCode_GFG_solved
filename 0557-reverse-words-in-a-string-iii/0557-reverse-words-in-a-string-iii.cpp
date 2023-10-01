class Solution {
public:
    string reverseWords(string s) {
        string tmp, res;
        for(int i=0 ; i<s.size(); i++){
            if(s[i]==' '){
                reverse(tmp.begin(), tmp.end());
                res+=tmp+" ";
                tmp="";
            }
            else if(i==s.size()-1){
                res+=s[i];
                reverse(tmp.begin(), tmp.end());
                res+=tmp;
            }
            else{
                tmp+=s[i];
            }
        }
        return res;
    }
};