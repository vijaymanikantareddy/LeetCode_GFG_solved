class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> vc;
        for(int i = 0 ; i < nums.size() ; i++){
            vc.push_back({nums[i], i});
        }
        sort(vc.rbegin(), vc.rend());
        vector<int> res;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = 0 ; j < k ; j++){
                if(vc[j].second == i){
                    res.push_back(nums[i]);
                    break;
                }
            }
        }
        return res;
    }
};