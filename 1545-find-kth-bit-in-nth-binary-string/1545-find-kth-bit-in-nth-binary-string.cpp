class Solution {
public:
    string inv(string s){
        string res = "";
        for(char ch: s){
            if(ch == '1'){
                res += "0";
            }else{
                res += "1";
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
    char findKthBit(int n, int k) {
        string s = "0";
        for(int i = 1 ; i < n ; i++){
            string temp = s + "1" + inv(s);
            s = temp;
        }
        return s[k - 1];
    }
};