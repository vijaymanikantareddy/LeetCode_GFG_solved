class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long res = 0, mini = 1, i = 0;
        while(mini <= n){
            if(i < nums.size() && nums[i] <= mini){
                mini += nums[i++];
            }else{
                mini *= 2;
                res++;
            }
        }
        return res;
    }
};