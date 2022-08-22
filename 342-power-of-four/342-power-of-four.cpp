class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0 ; pow(4,i)<=n ; i++){
            if(n==pow(4,i)){
                return true;
            }
        }
        return false;
    }
};