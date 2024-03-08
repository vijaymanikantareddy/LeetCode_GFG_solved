class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int mx = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
            mx = max(mx, mp[nums[i]]);
        }
        int res = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp[nums[i]] == mx) res++;
        }
        return res;
    }
};