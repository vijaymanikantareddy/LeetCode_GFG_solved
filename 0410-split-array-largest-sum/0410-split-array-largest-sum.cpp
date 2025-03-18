class Solution {
public:
    int fun(vector<int>& nums, int s){
        int t = 0, cnt = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(t + nums[i] <= s){
                t += nums[i];
            }else{
                t = nums[i];
                cnt++;
            }
        }
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = 0, high = 0;
        for(auto it: nums){
            low = max(low, it);
            high += it;
        }
        while(low <= high){
            int mid = low + (high - low)/2;
            if(fun(nums, mid) <= k){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};