class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 1, h = arr.size()-2;
        while(l < h){
            int mid = (l+h)/2;
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return mid;
            }
            else if(arr[mid]<arr[mid-1] && arr[mid] > arr[mid+1]){
                h--;
            }else{
                l++;
            }
        }
        return l;
    }
};