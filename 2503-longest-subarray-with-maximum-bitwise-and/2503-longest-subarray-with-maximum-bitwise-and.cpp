class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        unordered_map<int, int> mp;
        int mx = nums[0];
        for(auto it: nums){
            mx = max(it, mx);
            mp[it]++;
        }
        if(mp[mx] == 1) return 1;
        int res = 1;
        int i = 0, j = 0;
        while(i < nums.size()){
            int j = i+1;
            if(nums[i] == mx){
                int cnt = 1;
                while( j < nums.size() && nums[i] == nums[j]){
                    j++;
                    cnt++;
                }
                res = max(res, cnt);
            }
            i = j;
        }
        return res;
    }
};