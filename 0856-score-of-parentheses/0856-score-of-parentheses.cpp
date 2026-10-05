class Solution {
public:
    int scoreOfParentheses(string s) {
        int res = 0;
        int p = 0, b = 0;
        for(char ch : s){
            if(ch == '('){
                b++;
                p = 1;
            }else{
                b--;
                res += p << b;
                p = 0;
            }
        }
        return res;
    }
};