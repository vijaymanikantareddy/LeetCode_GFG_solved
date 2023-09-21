class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int a = nums1.length;
        int b = nums2.length;
        int arr[] = new int[a+b];
        int iter = 0;
        for(int i=0 ; i<a ; i++)
            arr[iter++] = nums1[i];
        for(int i=0 ; i<b ; i++)
            arr[iter++] = nums2[i];
        
        Arrays.sort(arr);
        int n = a+b;
        double median;
        if(n%2==0){
            median = (double) (arr[(n/2)-1]+arr[n/2])/2;
        }
        else{
            median = arr[n/2];
        }
        return median;
    }
}