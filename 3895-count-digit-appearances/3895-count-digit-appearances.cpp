class Solution {
public:
    int fun(int num, int digit){
        int cnt = 0;
        while(num > 0){
            int d = num % 10;
            if(d == digit) cnt++;
            num /= 10;
        }
        return cnt;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int res = 0;
        for(auto it: nums) res += fun(it, digit);
        return res;
    }
};