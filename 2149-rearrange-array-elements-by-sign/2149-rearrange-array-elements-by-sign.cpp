class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size());
        int po = 0, ne = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > 0){
                res[po] = nums[i];
                po += 2;
            }else{
                res[ne] = nums[i];
                ne += 2;
            }
        }
        return res;
    }
};