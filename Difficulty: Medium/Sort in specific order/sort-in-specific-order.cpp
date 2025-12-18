class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end(), [&](int a, int b){
           int ra = a % 2;
           int rb = b % 2;
           if(ra == rb && ra == 1){
               return a > b;
           }
           if(ra == rb && ra == 0){
               return a < b;
           }
           return ra > rb;
        });
    }
};