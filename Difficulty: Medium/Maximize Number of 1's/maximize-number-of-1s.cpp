class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int res = 0;
        int i = 0, j = 0;
        int cnt = 0;
        while(j < arr.size()){
            if(arr[j] == 0){
                cnt++;
            }
            while(cnt > k){
                if(arr[i] == 0){
                    cnt--;
                }
                i++;
            }
            res = max(res, j - i + 1);
            j++;
        }
        return res;
    }
};
