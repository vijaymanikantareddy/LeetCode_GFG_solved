class Solution {
public:
    int smallestNumber(int n) {
        int cnt = 0;
        int t = n;
        while(t > 0){
            cnt++;
            t >>= 1;
        }
        return pow(2, cnt) - 1;
    }
};