class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res = 0, subarr = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                subarr++;
                res += subarr;
            }
            else{
                subarr = 0;
            }
        }
        return res;
    }
};