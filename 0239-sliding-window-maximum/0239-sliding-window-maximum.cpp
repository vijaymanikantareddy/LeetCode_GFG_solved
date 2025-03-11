class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res;
        map<int, int> mp;
        for(int i = 0 ; i < k ; i++) mp[nums[i]]++;
        res.push_back(mp.rbegin()->first);
        int i = 0, j = k;
        while(j < n){
            mp[nums[j]]++;
            mp[nums[i]]--;
            if(mp[nums[i]] == 0) mp.erase(nums[i]);
            res.push_back(mp.rbegin()->first);
            j++;
            i++;
        }
        return res;
    }
};