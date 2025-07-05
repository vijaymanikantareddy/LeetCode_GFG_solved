class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int res = 0;
        for(int i = 1 ; i < arr.size() -1 ; i++){
            res = max(res, max(arr[i - 1] + arr[i], arr[i] + arr[i + 1]));
        }
        return res;
    }
};