class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        int i = 0;
        while(i < arr.size()){
            int a = arr[i][0];
            int b = arr[i][1];
            int j = i+1;
            while(j < arr.size() && arr[j][0] <= b){
                a = min(a, arr[j][0]);
                b = max(b, arr[j][1]);
                j++;
                i++;
            }
            res.push_back({a, b});
            i++;
        }
        return res;
    }
};