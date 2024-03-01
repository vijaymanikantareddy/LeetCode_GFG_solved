class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int on = 0, ze = 0;
        for(char ch: s){
            if(ch == '1') on++;
            else ze++;
        }
        string res = "";
        if(on){
            for(int i = 0 ; i < on-1 ; i++){
                res.push_back('1');
            }
            for(int i = 0 ; i < ze ; i++){
                res.push_back('0');
            }
            res.push_back('1');
            return res;
        }else{
            return s;
        }
    }
};