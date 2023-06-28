class Solution {
public:
    bool isprime(int n){
        if(n <= 1) return false;
        for(int i = 2 ; i*i <= n ; i++){
            if(n%i == 0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int res = 0;
        int j = nums.size()-1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(isprime(nums[i][i])){
                res = res > nums[i][i]? res: nums[i][i];
            }
            if(isprime(nums[i][j])){
                res = res > nums[i][j]? res: nums[i][j];
            }
            j--;
        }
        return res;
    }
};