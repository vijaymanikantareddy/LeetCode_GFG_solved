class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] <= k) k++;
            else break;
        }
        return k;
    }
};