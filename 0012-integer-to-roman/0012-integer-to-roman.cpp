class Solution {
public:
    string fun(int& num, map<int, string>& mp){
        if(num >= 1000){
            num -= 1000;
            return mp[1000];
        }else if(num >= 900){
            num -= 900;
            return mp[900];
        }else if(num >= 500){
            num -= 500;
            return mp[500];
        }else if(num >= 400){
            num -= 400;
            return mp[400];
        }else if(num >= 100){
            num -= 100;
            return mp[100];
        }else if(num >= 90){
            num -= 90;
            return mp[90];
        }else if(num >= 50){
            num -= 50;
            return mp[50];
        }else if(num >= 40){
            num -= 40;
            return mp[40];
        }else if(num >= 10){
            num -= 10;
            return mp[10];
        }else if(num >= 9){
            num -= 9;
            return mp[9];
        }else if(num >= 5){
            num -= 5;
            return mp[5];
        }else if(num >= 4){
            num -= 4;
            return mp[4];
        }else{
            num -= 1;
            return mp[1];
        }
    }
    
    string intToRoman(int num) {
        map<int, string> mp = {
            {1, "I"},{5, "V"}, {10, "X"}, {50, "L"}, {100, "C"}, {500, "D"}, {1000, "M"}, {4, "IV"}, {9, "IX"}, {40, "XL"}, {90, "XC"}, {400, "CD"}, {900, "CM"}
        };
        string res = "";
        while(num > 0){
            res += fun(num, mp);
        }
        return res;
    }
};