class Solution {
public:
    vector<string> fun(int n){
        if(n == 1){
            return {"0", "1"};
        }
        vector<string> smaller = fun(n - 1);
        vector<string> gray;
        for(int i = 0 ; i < smaller.size() ; i++){
            gray.push_back("0" + smaller[i]);
        }
        for(int i = smaller.size()-1 ; i >= 0 ; i--){
            gray.push_back("1" + smaller[i]);
        }
        return gray;
    }
    int change(string s){
        int res = 0;
        reverse(s.begin(), s.end());
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '1')
                res += pow(2, i);
        }
        return res;
    }
    vector<int> grayCode(int n) {
        vector<string> temp = fun(n);
        vector<int> res;
        for(int i = 0 ; i < temp.size() ; i++){
            res.push_back(change(temp[i]));
        }
        return res;
    }
};