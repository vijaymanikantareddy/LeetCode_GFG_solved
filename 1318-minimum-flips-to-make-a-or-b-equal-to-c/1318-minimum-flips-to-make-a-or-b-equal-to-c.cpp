class Solution {
public:
    int minFlips(int a, int b, int c) {
        int res = 0;
        while(a>0 | b > 0 || c>0){
            int ad = a&1;
            int bd = b&1;
            int cd = c&1;
            a >>= 1;
            b >>= 1;
            c >>= 1;
            if(cd == 0){
                if((ad == 1) && (bd == 1)){
                    res += 2;
                }else if((ad == 1) || (bd == 1)){
                    res += 1;
                }
            }else{
                if((ad == 0) && (bd == 0)){
                    res++;
                }
            }
            
        }
        return res;
    }
};