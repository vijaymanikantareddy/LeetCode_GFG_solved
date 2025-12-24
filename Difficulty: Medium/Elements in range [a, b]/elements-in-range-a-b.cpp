class Solution {
  public:
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        // code here
        sort(arr.begin(), arr.end());
        vector<int> res;
        for(auto it: queries){
            int a = it[0];
            int b = it[1];
            int st = lower_bound(arr.begin(), arr.end(), a) - arr.begin();
            int en = upper_bound(arr.begin(), arr.end(), b) - arr.begin();
            res.push_back(en - st);
        }
        return res;
    }
};