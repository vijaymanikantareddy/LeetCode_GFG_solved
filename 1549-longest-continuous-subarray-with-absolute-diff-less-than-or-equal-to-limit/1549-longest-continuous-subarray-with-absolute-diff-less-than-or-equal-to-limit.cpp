class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        map<int, int> mp;
        int i = 0, j = 0, n = nums.size();
        int res = 0;
        while(j < n){
            mp[nums[j]]++;
            while(i < j && mp.rbegin()->first - mp.begin()->first > limit){
                mp[nums[i]]--;
                if(mp[nums[i]] == 0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            res = max(res, j - i + 1);
            j++;
        }
        return res;
    }
};