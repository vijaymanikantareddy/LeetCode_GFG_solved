class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int mn = arr[0], n = arr.size();
        int index = 0;
        int low = 0, high = n - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[low] <= arr[mid]){
                if(mn > arr[low]){
                    mn = arr[low];
                    index = low;
                }
                low = mid + 1;
            }else{
                if(mn > arr[mid]){
                    mn = arr[mid];
                    index = mid;
                }
                high = mid - 1;
            }
        }
        return index;
    }
};
