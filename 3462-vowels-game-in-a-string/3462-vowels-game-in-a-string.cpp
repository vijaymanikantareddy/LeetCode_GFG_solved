class Solution {
public:
    bool isvow(char ch){
        return (ch == 'a' or ch == 'e'  or ch == 'i' or ch == 'u' or ch == 'o');
    }
    bool doesAliceWin(string s) {
        int cnt = 0;
        for(auto it: s){
            if(isvow(it)){
                cnt++;
            }
        }
        return (cnt != 0);
    }
};