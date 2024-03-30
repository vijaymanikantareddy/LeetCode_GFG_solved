class Solution {
public:
    int fun(vector<int>& nums, int k){
        if(k==0)
            return 0;
        unordered_map<int,int> mpp;
        int curdiff = 0, l = 0 , res = 0;
        for(int r = 0 ; r < nums.size() ; r++){
            mpp[nums[r]]++;
            if(mpp[nums[r]] == 1)
                curdiff++;
            while(curdiff > k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0)
                    curdiff--;
                l++;
            }
            res += r-l+1;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return fun(nums, k) - fun(nums, k-1);
    }
};