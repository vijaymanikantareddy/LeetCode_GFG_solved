class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i = 0, j = 0, count = 0, sum = 0;
        while(j < nums.size()){
            sum += nums[j];
            while(i < j && sum > goal){
                sum -= nums[i];
                i++;
            }
            if(sum == goal){
                int l = i;
                while(l < j && nums[l] == 0){
                    l++;
                    count++;
                }
                count++;
            }
            j++;
        }
        return count;
    }
};