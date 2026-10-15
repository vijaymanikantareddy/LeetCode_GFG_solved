class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int res = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i ; j < nums.size() ; j++){
                unordered_set<int> se;
                for(int k = i ; k <= j ; k++){
                    se.insert(nums[k]);
                }
                res += (se.size() * se.size());
            }
        }
        return res;
    }
};