class Solution {
public:
    bool isvow(char ch){
        return (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u');
    }
    string trimTrailingVowels(string s) {
        while(s.size() && isvow(s.back())){
            s.pop_back();
        }
        return s;
    }
};