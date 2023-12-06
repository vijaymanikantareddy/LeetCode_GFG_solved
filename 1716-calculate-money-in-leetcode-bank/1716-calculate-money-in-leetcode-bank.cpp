class Solution {
public:
    int totalMoney(int n) {
        int res = 0, cnt = 1;
        int week = 0;
        for(int i = 1 ; i <= n ; i++){
            if(i%7 == 1){
                week++;
                cnt = week;
            }
            res += cnt;
            cnt++;
        }
        return res;
    }
};