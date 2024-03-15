class Solution {
    public int[] productExceptSelf(int[] nums) {
        int pre[] = new int[nums.length];
        pre[0]=nums[0];
        for(int i=1 ; i<nums.length ; i++){
            pre[i] = pre[i-1]*nums[i];
        }

        int post[] = new int[nums.length];
        post[nums.length-1]=nums[nums.length-1];
        for(int i=nums.length-2 ; i>=0 ; i--){
           post[i] = post[i+1]*nums[i];
        }

        int res[] = new int[nums.length];
        res[0]=post[1];
        res[nums.length-1]=pre[nums.length-2];
        for(int i=1 ; i<nums.length-1 ; i++){
            res[i]=pre[i-1]*post[i+1];
        }
       return res;
    }
}