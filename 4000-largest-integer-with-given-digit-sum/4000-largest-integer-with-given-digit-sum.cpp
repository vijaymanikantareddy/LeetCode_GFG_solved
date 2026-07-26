class Solution {
public:
    int fun(int n){
        int s = 0;
        while(n > 0){
            int d = n % 10;
            s += d;
            n /= 10;
        }
        return s;
    }
    int largestInteger(int n, int s) {
        // cout << pow(10, n) - 1 << " " << pow(10, n);
        for(int i = pow(10, n) - 1 ; i >= 0 ; i--){
            if(fun(i) == s){
                return i;
            }
        }
        return -1;
    }
};