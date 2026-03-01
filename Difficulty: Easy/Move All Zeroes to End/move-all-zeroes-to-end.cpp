class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int curr = 0, nz = 0;
        while(curr < arr.size()){
            if(arr[curr] != 0){
                arr[nz] = arr[curr];
                nz++;
            }
            curr++;
        }
        while(nz < arr.size()){
            arr[nz++] = 0;
        }
    }
};