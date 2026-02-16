class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Code Here
        for(auto& it: arr){
            reverse(it.begin(), it.end());
        }
        sort(arr.begin(), arr.end());
        for(int i = 1 ; i < arr.size() ; i++){
            int lastend = arr[i-1][0];
            if(arr[i][1] < lastend){
                return false;
            }
        }
        return true;
    }
};