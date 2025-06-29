class Solution {
  public:
     int fun(vector<int>& arr, int givenTime, int n){
        int t = 0, cnt = 1;
        for(int i = 0 ; i < n ; i++){
            if(t + arr[i] <= givenTime){
                t += arr[i];
            }else{
                cnt++;
                t = arr[i];
            }
        }
        return cnt;
    }
    int splitArray(vector<int>& arr, int k) {
        // code here
        int low = 0, high = 0;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++) {
            low = max(low, arr[i]);
            high += arr[i];
        }
        while(low <= high){
            int mid = low + (high - low)/2;
            if(fun(arr, mid, n) <= k){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};