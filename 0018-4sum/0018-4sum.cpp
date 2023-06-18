class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                int be = j+1, en = nums.size()-1;
                while(be < en){
                    long long temp = (long long)nums[i] + (long long)nums[j] + (long long) nums[be] + (long long) nums[en];
                    if(temp == target){
                        res.insert({nums[i], nums[j], nums[be], nums[en]});
                        be++;
                        en--;
                    }
                    else if(temp < target){
                        be++;
                    }
                    else{
                        en--;
                    }
                }
            }
        }
        
        return vector<vector<int>>(res.begin(), res.end());
    }
};