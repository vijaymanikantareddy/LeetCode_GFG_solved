class Solution {
  public:
    int mergeSort(vector<int>& arr, int l, int h){
        int cnt = 0;
        if(l >= h) return cnt;
        int mid = l + (h - l)/2;
        cnt += mergeSort(arr, l, mid);
        cnt += mergeSort(arr, mid + 1, h);
        cnt += merge(arr, l, mid, h);
        return cnt;
    }
    int merge(vector<int>& arr, int l, int mid, int h){
        vector<int> temp;
        int cnt = 0;
        int left = l;
        int right = mid + 1;
        while(left <= mid && right <= h){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                temp.push_back(arr[right]);
                cnt += (mid - left + 1);
                right++;
            }
        }
        
        while(left <= mid){
            temp.push_back(arr[left++]);
        }
        
        while(right <= h){
            temp.push_back(arr[right++]);
        }
        
        for(int i = l ; i <= h ; i++){
            arr[i] = temp[i - l];
        }
        return cnt;
    }
    int inversionCount(vector<int> &arr) {
        // Code Here
        return mergeSort(arr, 0, arr.size()-1);
    }
};