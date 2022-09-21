class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int>mp;
        int ans=0;
        for(int i: nums){
            mp[i]++;
            if(mp[i-1]){
                ans = ans>(mp[i]+mp[i-1])? ans : (mp[i]+mp[i-1]);
            }
            if(mp[i+1]){
                ans = ans>(mp[i]+mp[i+1])? ans : (mp[i]+mp[i+1]);
            }
        }
        return ans;
    }
};