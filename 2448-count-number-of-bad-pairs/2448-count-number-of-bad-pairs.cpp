class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, long long> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]-i]++;
        }
        long long cnt = 0;
        for(auto it: mp){
            cnt += (it.second * (it.second-1)/2);
        }
        long long n = nums.size();
        n = n*(n-1)/2;
        return n - cnt;
    }
};