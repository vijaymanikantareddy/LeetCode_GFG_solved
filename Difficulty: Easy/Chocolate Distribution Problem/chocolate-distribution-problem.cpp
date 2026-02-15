class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n = a.size();
        sort(a.begin(), a.end());
        if(n == m) return a[n-1] - a[0];
        long long res = INT_MAX;
        for(int i = 0 ; i < n-m+1 ; i++){
            int d = a[i + m - 1] - a[i];
            res = res < d? res: d;
        }
        return res;
    }
};