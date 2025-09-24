class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator == 0) return "0";
        string result;
        if((numerator < 0) ^ (denominator < 0)){
            result += "-";
        }
        long long absNum = labs(numerator);
        long long absDenum = labs(denominator);

        long long integerDiv = absNum / absDenum;
        result += to_string(integerDiv);

        long long remain = absNum % absDenum;
        if(remain == 0) return result;

        result += ".";
        unordered_map<int, int> mp;
        while(remain != 0){
            if(mp.count(remain)){
                result.insert(mp[remain], "(");
                result += ")";
                break;
            }
            mp[remain] = result.size();

            remain *= 10;
            integerDiv = remain / absDenum;
            result += to_string(integerDiv);

            remain = remain % absDenum;
        }
        return result;
    }
};