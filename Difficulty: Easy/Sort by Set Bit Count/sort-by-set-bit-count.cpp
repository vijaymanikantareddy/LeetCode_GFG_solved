class Solution {
  public:
    int fun(int n){
        int res = 0;
        while(n > 0){
            if((n&1) == 1){
                res++;
            }
            n >>= 1;
        }
        return res;
    }
    vector<int> sortBySetBitCount(vector<int>& arr) {
        // code here
        int n = 32;
        vector<vector<int>> bits(n);
        for(int i = 0 ; i < arr.size() ; i++){
            int t = fun(arr[i]);
            bits[t].push_back(arr[i]);
        }
        vector<int> res;
        for(int i = 31 ; i >= 0 ; i--){
            if(bits[i].size()){
                for(auto it: bits[i]){
                    res.push_back(it);
                }
            }
        }
        return res;
    }
};