class Solution {
public:
    bool isvow(char ch){
        return (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u');
    }
    string trimTrailingVowels(string s) {
        int last = s.size() - 1;
        while(last >= 0 && isvow(s[last])){
            last--;
        }
        return s.substr(0, last + 1);
    }
};