class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        long long i = 0, j = n-1, mx = 0, area;
        while(i<j){
            area = min(arr[i], arr[j])*abs(i-j);
            mx = max(mx, area);
            if(arr[i] < arr[j]){
                i++;
            }
            else j--;
        }
        return mx;
    }
};