class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int res = 0;
        int sum = 0;
        int i = 0, j = 0;
        unordered_map<int, int> mp;
        while(j < nums.size()){
            sum += nums[j];
            mp[nums[j]]++;
            while(i < j && mp[nums[j]] > 1){
                sum -= nums[i];
                mp[nums[i]]--;
                i++;
            }
            res = max(res, sum);
            j++;
        }
        return res;
    }
};