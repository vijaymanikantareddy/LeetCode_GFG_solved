class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i=0 ; i<=n ; i++){
            if(pow(3,i)==n){
                return true;
            }
            if(pow(3,i)>n){
                return false;
            }
        }
        return false;
    }
};