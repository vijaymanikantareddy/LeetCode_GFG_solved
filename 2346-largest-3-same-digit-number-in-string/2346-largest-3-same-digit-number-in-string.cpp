class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
        int val = -1;
        for(int i = 1 ; i < num.size()-1 ; i++){
            if(num[i] == num[i-1] && num[i] == num[i+1]){
                int a = num[i] -'0';
                if(a > val){
                    val = a;
                    res = "";
                    res = num.substr(i-1, 3);
                }
            }
        }
        return res;
    }
};