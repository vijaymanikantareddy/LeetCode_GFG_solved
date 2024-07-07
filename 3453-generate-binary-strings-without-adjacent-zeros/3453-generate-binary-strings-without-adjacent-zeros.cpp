class Solution {
public:
    void fun(int n,string s, vector<string> &res){
        if(s.length() == n){
            res.push_back(s);
            return;
        }
        if(s.empty() or s.back() == '1'){
            fun(n, s+'0', res);
        }
        fun(n, s+'1', res);
    }
    vector<string> validStrings(int n) {
        vector<string> res;
        fun(n, "", res);
        return res;
    }
};