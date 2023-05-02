class Solution {
    public int arraySign(int[] nums) {
        int pro = 1;
        for(int i = 0 ;i < nums.length ; i++){
            if(nums[i] == 0){
                return 0;
            }
            if(nums[i]<0){
                nums[i] = -1;
            }else{
                nums[i] = 1;
            }
        }
        for(int ele: nums){
            pro *= ele;
        }
        return pro;
    }
}