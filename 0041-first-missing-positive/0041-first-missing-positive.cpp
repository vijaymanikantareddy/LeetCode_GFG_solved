class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i: nums)
            mp[i]++;
        for(int i=1 ; i<=nums.size()+1 ; i++){
            if(mp[i]==0)
                return i;
        }
        return 1;
    }
};