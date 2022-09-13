class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0 ; i<nums.size() ; i++)
            mp[nums[i]-i]++;
        int l = nums.size();
        if(mp[nums[0]-0]==l)
            return 0;
        long long total = (long long)l*(l-1)/2;
        for(auto it: mp)
        {
            total -= it.second*(it.second-1)/2;
        }
        return total;
    }
};