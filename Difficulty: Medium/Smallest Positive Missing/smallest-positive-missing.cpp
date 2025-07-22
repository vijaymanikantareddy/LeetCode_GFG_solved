class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int n = arr.size();
        unordered_map<int, int> mp;
        for(int i = 0 ; i < n ; i++){
            mp[arr[i]]++;
        }
        for(int i = 1 ; i <= n ; i++){
            if(mp[i] == 0){
                return i;
            }
        }
        return n+1;
    }
};