class Solution {
    public int partitionArray(int[] nums, int k) {
        Arrays.sort(nums);
        int res = 1;
        int last = nums[0];
        for(int i = 1 ; i < nums.length ; i++){
            if(nums[i] - last > k){
                last = nums[i];
                res++;
            }
        }
        return res;
    }
}