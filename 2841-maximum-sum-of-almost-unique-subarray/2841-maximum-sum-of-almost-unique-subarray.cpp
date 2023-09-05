class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long s = 0;
        map<int, int> mp;
        long long res = 0;
        for(int i = 0 ; i < k ; i++){
            mp[nums[i]]++;
            s += nums[i];
        }
        if(mp.size() >= m){
            res = res > s? res: s;
        }
        for(int i = k ; i < nums.size() ; i++){
            s -= nums[i-k];
            if(mp[nums[i-k]] == 1){
                mp.erase(nums[i-k]);
            }else{
                mp[nums[i-k]]--;
            }
            s += nums[i];
            mp[nums[i]]++;
            if(mp.size() >= m){
                res = res > s? res: s;
            }
        }
        return res;
    }
};