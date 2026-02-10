class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int res = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            unordered_set<int> ods, ev;
            int j = i;

            for(; j < nums.size() ; j++){
               if(nums[j] %2 == 0){
                    ev.insert(nums[j]);
               }else{
                    ods.insert(nums[j]);
               }
                if(ods.size() == ev.size()){
                    res = max(res, j - i + 1);
                }
            }
            
        }
        return res;
    }
};