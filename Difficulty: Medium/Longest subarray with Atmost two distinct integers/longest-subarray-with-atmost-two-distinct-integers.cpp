class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int res = 0;
        int i = 0, j = 0;
        unordered_map<int, int> mp;
        while(i < arr.size()){
            mp[arr[i]]++;
            while(j < i && mp.size() > 2){
                // cout << i << " " << j << " hii "; 
                if(mp[arr[j]] == 1) mp.erase(arr[j]);
                else mp[arr[j]]--;
                
                j++;
            }
            res = max(res, i - j + 1);
            i++;
        }
        return res;
    }
};