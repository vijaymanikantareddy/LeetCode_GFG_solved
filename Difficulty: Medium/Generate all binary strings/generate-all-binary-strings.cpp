class Solution {
  public:
    void fun(int num, int len, vector<string>& res){
        string s;
        while(num > 0){
            if(num%2 == 0){
                s += '0';
            }else{
                s += '1';
            }
            num >>= 1;
        }
        while(s.size() < len){
            s.push_back('0');
        }
        reverse(s.begin(), s.end());
        res.push_back(s);
        return;
    }
    vector<string> binstr(int n) {
        // code here
        vector<string> res;
        for(int i = 0 ; i < pow(2, n) ; i++){
            fun(i, n, res);
        }
        return res;
    }
};