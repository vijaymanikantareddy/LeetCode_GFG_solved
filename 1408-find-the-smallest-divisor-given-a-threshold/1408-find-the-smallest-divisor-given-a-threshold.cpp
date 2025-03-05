class Solution {
public:
    bool fun(vector<int>& nums, int threshold, int val){
        int s = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            s += ceil((double)nums[i]/val);
        }
        return (s <= threshold);
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        while(low <= high){
            int mid = low + (high - low)/2;
            if(fun(nums, threshold, mid)){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};