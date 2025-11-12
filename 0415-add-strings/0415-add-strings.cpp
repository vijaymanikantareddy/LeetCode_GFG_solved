class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        string res;
        int i = 0, j = 0;
        int c = 0, sum = 0;
        while(i < num1.size() && j < num2.size()){
            int a = num1[i] - '0';
            int b = num2[i] - '0';
            sum = a + b + c;
            c = sum / 10;
            sum = sum % 10;
            res.push_back(('0' + sum));
            i++;
            j++;
        }
        while(i < num1.size()){
            int a = num1[i] - '0';
            sum = a + c;
            c = sum / 10;
            sum = sum % 10;
            res.push_back(('0' + sum));
            i++;
        }
        while(j < num2.size()){
            int b = num2[j] - '0';
            sum = b + c;
            c = sum / 10;
            sum = sum % 10;
            res.push_back(('0' + sum));
            j++;
        }
        if(c > 0){
            res.push_back(('0' + c));
        }
        reverse(res.begin(), res.end());
        return res;
    }
};