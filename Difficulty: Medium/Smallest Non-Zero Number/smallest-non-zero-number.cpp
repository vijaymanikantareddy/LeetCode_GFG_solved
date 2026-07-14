class Solution {
  public:
    int find(vector<int>& arr) {
        // code here
        int x = 0;
        for(int i = arr.size() - 1 ; i >= 0 ; i--){
            int sum = arr[i] + x;
            x = (sum + 1) / 2;
        }
        return x;
    }
};