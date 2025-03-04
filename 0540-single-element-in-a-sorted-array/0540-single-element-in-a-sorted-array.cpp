class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // The elements are in form of (e, o, e, o, E, o, e, o, e)
        //Before single element -> (e, o) 
        //After Single Element -> (o, e)
        int n = nums.size();
        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        
        int low = 1, high = n - 2;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid + 1]) 
                return nums[mid];
            if(((mid%2 != 0) && nums[mid-1] == nums[mid]) 
            or (mid%2 == 0 && nums[mid] == nums[mid + 1])){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return nums[0];
    }
};