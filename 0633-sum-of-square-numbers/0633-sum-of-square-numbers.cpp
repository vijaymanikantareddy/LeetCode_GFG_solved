class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i = 0, j = sqrt(c);
        // cout << j << endl;
        while(i <= j){
            long long a = i*i + j*j;
            if(a == c) return true;
            if(a < c){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};