class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        vector<int> res;
        for(int i = 0 ; i < queries.size() ; i++){
            int l = queries[i][0];
            int r = queries[i][1];
            int x = queries[i][2];
            
            int a = lower_bound(arr.begin() + l, arr.begin() + r, x) - arr.begin();
            int b = upper_bound(arr.begin() + l, arr.begin() + r, x) - arr.begin();
            
            if(arr[b] == x) b++;
            res.push_back(b - a);
        }
        return res;
    }
};