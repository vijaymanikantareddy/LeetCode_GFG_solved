class Solution {
    public int numIdenticalPairs(int[] nums) {
        int arr[] = new int[101];
        for(int i: nums){
            arr[i]++;
        }
        int cnt=0;
        for(int i=0 ; i<101 ; i++)
        {
            cnt += arr[i]*(arr[i]-1)/2;
        }
        return cnt;
    }
}