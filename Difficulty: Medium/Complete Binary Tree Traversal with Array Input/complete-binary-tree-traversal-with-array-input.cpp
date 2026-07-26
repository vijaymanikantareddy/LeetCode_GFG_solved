class Solution {
  public:
    vector<vector<int>> levelSort(vector<int>& arr) {
        // code here
        vector<vector<int>> res;
        int n = arr.size();
        vector<int> temp;
        int level = 0;
        for(int i = 0 ; i < n ; ){
            int eleInLevel = pow(2, level);
            
            for(int j = 0 ; j < eleInLevel && i < n ; j++){
                temp.push_back(arr[i++]);
            }
            
            sort(temp.begin(), temp.end());
            res.push_back(temp);
            temp.clear();
            level++;
        }
        return res;
    }
};
