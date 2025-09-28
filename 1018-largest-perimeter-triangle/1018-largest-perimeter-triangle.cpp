class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>()); //sort array in descending order

        for(int i=0 ; i<nums.size()-2 ; i++){   //leave last 2 indices
            if(nums[i]<nums[i+1]+nums[i+2]){  //largest side should be smaller than sum of other two sides.
                return nums[i]+nums[i+1]+nums[i+2];
            }
        }
        return 0;
    }
};