class Solution {
public:
    int minimumLength(string s) {
        if(s.size() == 1) return 1;
        int i = 0, j = s.size()-1;
        while(i < j){
            char ch = s[i];
            if(s[i] != s[j]) break;
            while(i+1 < j && ch == s[i+1]){
                i++;
            }
            while(ch == s[j] && j > i){
                j--;
            }
            i++;
        }
        return abs(j - i + 1);
    }
};