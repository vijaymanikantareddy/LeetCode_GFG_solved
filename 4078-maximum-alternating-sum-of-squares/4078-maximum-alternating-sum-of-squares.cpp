class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++){
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
        long long res = 0;
        int i = 0, j = nums.size() - 1;
        while(j > i){
            long long a = (long long) nums[j] * (long long) nums[j];
            long long b = (long long) nums[i] * (long long) nums[i];
            res += (a - b);
            i++;
            j--;
        }
        if(j == i){
            res += (long long) nums[j] * nums[j];
        }
        return res;
    }
};