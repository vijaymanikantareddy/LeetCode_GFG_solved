class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        HashSet<List<Integer>> se = new HashSet<>();
        for(int i = 0 ; i < nums.length-2; i++){
            int j = i+1, k = nums.length-1;
            while(j < k){
                if(nums[i]+nums[j]+nums[k] == 0){
                    List<Integer> ar = new ArrayList<>();
                    Collections.addAll(ar, nums[i], nums[j], nums[k]);
                    se.add(ar);
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k] > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return new ArrayList<>(se);
    }
}