class Solution {
    public int[] applyOperations(int[] nums) {
        for(int i = 0 ; i < nums.length-1 ; i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        int i = 0, cnt = 0;
        while(i < nums.length){
            if(nums[i] != 0){
                nums[cnt++] = nums[i];
            }
            i++;
        }
        while(cnt < nums.length){
            nums[cnt++] = 0;
        }
        return nums;
    }
}