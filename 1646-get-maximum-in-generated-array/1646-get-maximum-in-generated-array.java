class Solution {
    public int getMaximumGenerated(int n) {
        int arr[] = new int[n+1];
        if(n < 2){
            return n;
        }
        arr[0] = 0;
        arr[1] = 1;
        int mx = 0;
        for(int i = 2 ; i <= n ; i++){
            if(i%2 == 0){
                arr[i] = arr[i/2];
            }else{
                arr[i] = arr[i/2]+arr[i/2+1];
            }
            mx = mx < arr[i]? arr[i]: mx;
        }
        return mx;
    }
}