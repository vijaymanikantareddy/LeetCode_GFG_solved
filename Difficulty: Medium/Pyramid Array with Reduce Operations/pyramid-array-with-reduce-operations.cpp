class Solution {
  public:
    int formPyramid(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long total = arr[0];
        vector<int> left(n), right(n);
        left[0] = 1;
        for(int i = 1 ; i < n ; i++){
            left[i] = min(arr[i], left[i - 1] + 1);
            total += arr[i];
        }
        
        right[n - 1] = 1;
        for(int i = n - 2 ; i >= 0 ; i--){
            right[i] = min(arr[i], right[i + 1] + 1);
        }
        
        int mxpeak = 0;
        for(int i = 0 ; i < n ; i++){
            int peak = min(left[i], right[i]);
            mxpeak = max(peak, mxpeak);
            // cout << mxpeak << " ";
        }
        long long req = 1LL * mxpeak * mxpeak;
        
        return total - req;
    }
};