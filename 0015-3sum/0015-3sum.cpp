class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> se;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size()-2; i++){
            int j = i+1, k = nums.size()-1;
            while(j < k){
                if(nums[i]+nums[j]+nums[k] == 0){
                    se.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k] > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return vector(se.begin(), se.end());
    }
};