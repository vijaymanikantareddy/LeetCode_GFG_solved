class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = 999999;
        for(int i = 0 ; i < nums.size()-2; i++){
            int j = i+1, k = nums.size()-1;
            while(j < k){
                int temp = nums[i]+nums[j]+nums[k];
                if(temp == target){
                    return temp;
                }
                else if(temp > target){
                    k--;
                    res = abs(res - target)<abs(temp - target)? res: temp;
                }
                else{
                    j++;
                    res = abs(res - target)<abs(temp - target)? res: temp;
                }
            }
        }
        return res;
    }
};