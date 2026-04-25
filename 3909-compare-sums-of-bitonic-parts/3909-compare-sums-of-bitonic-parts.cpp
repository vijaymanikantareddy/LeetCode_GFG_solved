class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int peakInd = 0, peak = nums[0];
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > peak){
                peakInd = i;
                peak = nums[i];
            }
        }
        long long a = 0, b = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i < peakInd){
                a += nums[i];
            }else if(i > peakInd){
                b += nums[i];
            }
        }
        if(a > b) return 0;
        else if(a < b) return 1;
        return -1;
    }
};