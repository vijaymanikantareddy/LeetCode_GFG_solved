class Solution {
public:
    int fun(int n){
        return n*(n-1)/2;
    }
    int numIdenticalPairs(vector<int>& nums) {
        int res=0;
        map<int, int> mp;
        for(int i=0 ; i<nums.size() ; i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            res += fun(it.second);
        }
        return res;
    }
};