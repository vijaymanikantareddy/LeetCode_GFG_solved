class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        int it = pow(2, n);
        for(int i = 0 ; i < it ; i++){
            int bi = i;
            vector<int> li;
            for(int j = 0 ; j < n ; j++){
                if((bi&1) == 1){
                    li.push_back(nums[j]);
                }
                bi>>=1;
            }
            res.push_back(li);
        }
        return res;
    }
};