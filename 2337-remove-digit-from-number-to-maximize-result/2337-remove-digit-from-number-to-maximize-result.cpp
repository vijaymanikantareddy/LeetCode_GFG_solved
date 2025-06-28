class Solution {
public:
    string removeDigit(string number, char digit) {
        string res = "";
        for(int i = 0 ; i < number.size() ; i++){
            if(digit == number[i]){
                string temp = number;
                temp.erase(i, 1);
                // break;
                res = max(res, temp);
            }
        }
        return res;
    }
};