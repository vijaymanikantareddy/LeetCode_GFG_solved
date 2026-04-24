class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int res = 1;
        int large = arr[0];
        for(int i = 1 ; i < arr.size() ; i++){
            if(arr[i] >= large){
                large = arr[i];
                res++;
            }
        }
        return res;
    }
};