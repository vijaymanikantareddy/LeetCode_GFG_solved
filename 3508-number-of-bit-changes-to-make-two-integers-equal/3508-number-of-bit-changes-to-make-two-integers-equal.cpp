class Solution {
public:
    int minChanges(int n, int k) {
        if(n == k) return 0;
        int le = max(floor(log2(k))+1, floor(log2(n))+1);
        int res = 0;
        
        for(int i = 0 ; i < le ; i++){
            if((n&(1<<i)) and !(k&(1<<i))){
                res++;
            }
            else if(!(n&(1<<i)) and (k&(1<<i))){
                return -1;
            }
        }
        return res;
    }
};