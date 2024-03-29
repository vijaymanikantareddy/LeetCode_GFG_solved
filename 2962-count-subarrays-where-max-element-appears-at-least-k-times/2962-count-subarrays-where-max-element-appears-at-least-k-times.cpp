class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int mxe = nums[0];
        map<int, int> mp;
        for(auto it: nums){
            mxe = max(it, mxe);
            mp[it]++;
        } 
        if(mp[mxe] < k) return 0;
        int i = 0, j = 0;
        long long res = 0;
        int cnt = 0;
        int n = nums.size();
        while(j < nums.size()){
            if(nums[j] == mxe) cnt++;
            while(i <= j && cnt >= k){
                res += n - j;
                if(nums[i] == mxe){
                    cnt--;
                }
                i++;
            }
            j++;
        }
        return res;
    }
};