class Solution {
  public:
    int minSubsets(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int res = 1;
        for(int i = 1 ; i < arr.size() ; i++){
            if(arr[i] != arr[i - 1] + 1){
                res++;
            }
        }
        return res;
    }
};
