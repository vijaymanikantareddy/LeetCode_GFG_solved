class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        unordered_set<int> se(arr.begin(), arr.end());
        vector<int> res;
        for(int i = low ; i <= high ; i++){
            if(se.find(i) == se.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};