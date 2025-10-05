class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int a = 0;
        int cnt = 0;
        for(auto it: nums){
            a ^= it;
            if(it == 0) cnt++;
        }
        if(a == 0){
            if(cnt == nums.size()) return 0;
            return nums.size() - 1;
        }
        return nums.size();
    }
};