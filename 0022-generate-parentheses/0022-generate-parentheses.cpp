class Solution {
public:
    vector<string> res;
    void fun(int open, int close, int n, string s){
        if(s.size() == 2 * n){
            res.push_back(s);
            return ;
        }
        if(open < n){
            fun(open + 1, close, n, s + "(");
        }
        if(close < open){
            fun(open, close + 1, n, s + ")");
        }
    }
    vector<string> generateParenthesis(int n) {
        fun(0, 0, n, "");
        return res;
    }
};