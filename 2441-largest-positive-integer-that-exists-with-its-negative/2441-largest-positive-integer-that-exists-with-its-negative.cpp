class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0 ; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int mx=-1;
        for(auto it: mp){
            if(it.second>0){
                if(mp[-1*it.first]>0 and abs(it.first)>mx){
                    mx = it.first;
                }
            }
        }
        return mx;
    }
};