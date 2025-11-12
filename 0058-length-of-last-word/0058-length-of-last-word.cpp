class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        int i = s.size() - 1;
        while(i >= 0 && s[i] == ' '){
            i--;
        }
        while(i >= 0 && s[i] != ' '){
            res++;
            i--;
        }
        return res;
    }
};