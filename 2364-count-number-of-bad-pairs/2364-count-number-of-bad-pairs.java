class Solution {
    public long countBadPairs(int[] nums) {
        HashMap<Integer, Integer> h1 = new HashMap<>();
        for(int i=0 ; i<nums.length ; i++)
        {
            if(h1.containsKey(nums[i]-i))
            {
                h1.put(nums[i]-i, (int)h1.get(nums[i]-i)+1);
            }
            else
                h1.put(nums[i]-i,1);
        }
        int l = nums.length;
        if((int)h1.get(nums[0]-0)==l)
            return 0;
        long total = (long)l*(l-1)/2;
        for(Map.Entry entry: h1.entrySet())
        {
            total -= (int)entry.getValue()*((int)entry.getValue()-1)/2;
        }
        return total;
    }
}