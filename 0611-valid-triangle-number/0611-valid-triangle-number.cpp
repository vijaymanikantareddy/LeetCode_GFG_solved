class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 0;
        for(int i = 2 ; i < nums.size() ; i++){
            int l = 0, r = i - 1;
            while(l < r){
                if(nums[l] + nums[r] > nums[i]){
                    res += (r - l);
                    r--;
                }else{
                    l++;
                }
            }
        }
        return res;
    }
};