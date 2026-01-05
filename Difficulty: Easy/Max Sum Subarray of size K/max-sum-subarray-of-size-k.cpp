class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int i = 0, j = 0;
        long res = 0;
        long curr = 0;
        int n = arr.size();
        for(i = 0 ; i < k ; i++){
            curr += arr[i];
        }
        res = curr;
        while(i < n){
            curr -= arr[j++];
            curr += arr[i++];
            res = max(res, curr);
        }
        return res;
    }
};