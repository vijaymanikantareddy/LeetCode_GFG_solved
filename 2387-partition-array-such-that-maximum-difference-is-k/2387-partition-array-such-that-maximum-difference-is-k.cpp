class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int res = 1;
        int last = nums[0];
        int i = 1, n = nums.size();
        while(i < n){
            if(nums[i] - last > k){
                last = nums[i];
                res++;
            }
            i++;
        }
        return res;
    }
};