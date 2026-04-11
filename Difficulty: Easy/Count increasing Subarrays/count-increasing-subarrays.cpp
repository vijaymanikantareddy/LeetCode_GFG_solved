class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        // code here.
        int res = 0, curr = 1;
        for(int i = 1 ; i < arr.size() ; i++){
            if(arr[i] > arr[i - 1]){
                curr++;
                res += (curr - 1);
            }else{
                curr = 1;
            }
        }
        return res;
    }
};
