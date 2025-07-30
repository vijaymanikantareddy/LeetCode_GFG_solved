class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> mp;
        int s = 0, c = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            s += arr[i];
            if(s == k) c++;
            c += mp[s - k];
            mp[s]++;
        }
        return c;
    }
};