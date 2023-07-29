class Solution {
public:
    int minOperations(int n) {
        int res = 0;
        for(int i = 0 ; i < n/2 ; i++){
            int num = (2*i)+1;
            res += (n - num);
        }
        return res;
    }
};