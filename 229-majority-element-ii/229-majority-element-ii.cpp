class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size()/3;
        unordered_map<int, int> mp;
        vector<int> res;
        for(int i=0 ; i<nums.size() ; i++)
            mp[nums[i]]++;
        for(auto it: mp){
            if(it.second>n){
                res.push_back(it.first);
            }
        }
        return res;
    }
};