class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int l = 0, r = arr.size() - 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(arr[mid] < k){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return l;
    }
};