class Solution {
  public:
    int fun(vector<int>& arr, int k){
        int cnt = 0;
        int n = arr.size();
        int res = 0;
        int right = 0, left = 0;
        for(right = 0 ; right < n ; right++){
            if(arr[right] % 2 != 0){
                cnt++;
            }
            while(cnt == k){
                res += (n - right);
                if(arr[left] % 2 != 0) cnt--;
                left++;
            }
        }
        return res;
    }
    int countSubarrays(vector<int>& arr, int k) {
        // code here
        return fun(arr, k) - fun(arr, k + 1);
    }
};