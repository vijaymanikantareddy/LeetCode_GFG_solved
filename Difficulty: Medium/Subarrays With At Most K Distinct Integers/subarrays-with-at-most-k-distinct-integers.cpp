class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        map<int, int> mp;
        int i = 0, j = 0;
        int n = arr.size();
        int res = 0;
        while(j < n){
            mp[arr[j]]++;
            while(i < j && mp.size() > k){
                mp[arr[i]]--;
                if(mp[arr[i]] == 0){
                    mp.erase(arr[i]);
                }
                i++;
            }
            res += j - i + 1;
            j++;
        }
        return res;
    }
};