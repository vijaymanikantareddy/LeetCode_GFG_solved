class Solution {
public:
    string fun(int n, char ch){
        string s;
        if(n%2 != 0){
            for(int i = 0 ; i < n ; i++){
                s.push_back(ch);
            }
            return s;
        }else{
            return ch+fun(n-1, ch+1);
        }
    }
    string generateTheString(int n) {
        string res = "";
        if(n%2 != 0){
            for(int i = 0 ; i < n ; i++){
                res += 'a';
            }
            return res;
        }
        else{
            res += fun(n, 'a');
        }
        return res;
    }
};