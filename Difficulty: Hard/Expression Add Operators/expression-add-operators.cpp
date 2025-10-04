class Solution {
  public:
    vector<string> res;
    
    void fun(string& s, long long target, string temp, int start, int n, 
                long long curr, long long lastValue){
        if(start == n){
            if(curr == target){
                res.push_back(temp);
            }
            return;
        }
        for(int i = start ; i < n ; i++){
            if(i > start && s[start] == '0'){
                break;
            }
            string numStr = s.substr(start, i - start + 1);
            long num = stoll(numStr);
            if(start == 0){
                fun(s, target, numStr, i + 1, n, num, num);
            }else{
                fun(s, target, temp + "+" + numStr, i + 1, n, curr + num, num);
                
                fun(s, target, temp + "-" + numStr, i + 1, n, curr - num, -num);
                
                fun(s, target, temp + "*" + numStr, i + 1, n,  
                        curr - lastValue + lastValue * num, lastValue * num);
            }
        }
    }
    vector<string> findExpr(string &s, int target) {
        // code here
        string temp = "";
        fun(s, target, temp, 0, s.size(), 0, 0);
        return res;
    }
};