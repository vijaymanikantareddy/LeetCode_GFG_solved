class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
        int res = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            res += arr[i] * (i + 1) * (arr.size() - i);
        }
        return res;
    }
};