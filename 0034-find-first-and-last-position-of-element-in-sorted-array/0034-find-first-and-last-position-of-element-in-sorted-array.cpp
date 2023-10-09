class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int cnt=0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i]==target){
                res.push_back(i);
                cnt++;
            }
        }
        if(cnt==0){
            res ={-1, -1};
        }
        return {res[0], res[res.size()-1]};
    }
};