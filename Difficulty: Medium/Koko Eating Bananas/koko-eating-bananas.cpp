class Solution {
  public:
    int maxArr(vector<int>& arr){
        int res = arr[0];
        for(auto it: arr) res = max(it, res);
        return res;
    }
    bool fun(vector<int>& arr, int h, int mid){
        int res = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            res += ceil((double)arr[i]/mid);
            if(res > h) return false;
        }
        return (res <= h);
    }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int low = 1, high = maxArr(arr);
        while(low <= high){
            int mid = low + (high - low)/2;
            if(fun(arr, k, mid)){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};