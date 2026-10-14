class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s(num, '-');
        int i = 0;
        if(sum > 9*num) return "";
        while(sum > 9){
            if(i >= num) return "";
            s[i++] = '9';
            sum -= 9;
        }
        s[i++] = '0'+sum;
        for( ; i < num ; i++) s[i] = '0';
        
        return s;
    }
};