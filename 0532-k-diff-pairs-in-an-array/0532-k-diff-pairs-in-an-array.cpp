class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<pair<int, int>> st;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                if(abs(nums[i] - nums[j]) == k){
                    int mi = nums[i] < nums[j]? nums[i] : nums[j];
                    int ma = nums[i] > nums[j]? nums[i] : nums[j];
                    st.insert({mi, ma});
                }
            }
        }
        return st.size();
    }
};