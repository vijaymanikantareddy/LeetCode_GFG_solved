class Solution {
public:
    string largestOddNumber(string num) {
        int j = num.length()-1;
        while(j>=0)
        {
            int a = num[j] - '0';
            if(a%2!=0){
                break;
            }
            j--;
        }
        return num.substr(0, j+1);
    }
};