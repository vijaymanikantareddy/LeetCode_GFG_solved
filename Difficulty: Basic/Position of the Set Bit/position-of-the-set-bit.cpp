class Solution {
  public:
    int findPosition(int N) {
        // code here
        if((N&(N-1)) != 0 || N < 1){
            return -1;
        }
        int res = 1;
        while(N>1){
            N /= 2;
            res++;
        }
        return res;
    }
};