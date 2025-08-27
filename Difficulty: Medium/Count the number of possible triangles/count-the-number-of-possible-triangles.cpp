class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int res = 0;
        for(int i = 2 ; i < arr.size() ; i++){
            int l = 0;
            int r = i - 1;
            while(l < r){
                int sum = arr[l] + arr[r];
                if(sum > arr[i]){
                    res += (r - l);
                    r--;
                }else{
                    l++;
                }
            }
        }
        return res;
    }
};
