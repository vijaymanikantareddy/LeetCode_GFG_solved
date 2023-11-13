class Solution {
public:
    bool isvow(char ch){
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }
    string sortVowels(string s) {
        string vow = "";
        for(char ch: s){
            if(isvow(ch)) vow.push_back(ch);
        }
        if(vow.size() == 0) return s;
        sort(vow.begin(), vow.end());
        int it = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(isvow(s[i])){
                s[i] = vow[it++];
            }
        }
        return s;
    }
};