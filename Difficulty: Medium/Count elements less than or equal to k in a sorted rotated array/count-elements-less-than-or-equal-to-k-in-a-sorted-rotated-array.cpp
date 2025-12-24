class Solution {
    
    public: 
    
    int hill(vector<int>& arr){
        int n = arr.size();
        int l = 0, r = n - 1;
        int ans = -1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(arr[mid] >= arr[0]){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        // cout << ans << endl;
        return ans;
    }
    int countLessEqual(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        
        int idx = hill(arr);
        
        int left = upper_bound(arr.begin(), arr.begin() + idx + 1, x) - arr.begin();
        int right = upper_bound(arr.begin() + idx + 1, arr.end(), x) - (arr.begin() + idx + 1);
        
        return left + right;
    }
};