class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int res = Integer.MAX_VALUE;
        for(int i = 0 ; i < nums.length-2; i++){
            int j = i+1, k = nums.length-1;
            while(j < k){
                int temp = nums[i]+nums[j]+nums[k];
                if(temp == target){
                   return target;
                }
                else if(temp > target){
                    k--;
                    res = Math.abs(res - target)< Math.abs(temp - target)? res: temp;
                }
                else{
                    j++;
                    res = Math.abs(res - target)<Math.abs(temp - target)? res: temp;
                }
            }
        }
        return res;
    }
}