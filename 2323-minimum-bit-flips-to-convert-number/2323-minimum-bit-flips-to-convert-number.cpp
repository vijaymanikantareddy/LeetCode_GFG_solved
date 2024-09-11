class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt = 0;
        while(start > 0 || goal > 0){
            int a = start&1;
            start >>= 1;
            int b = goal&1;
            goal >>= 1;
            if(a != b){
                cnt++;
            }
        }
        return cnt;
    }
};