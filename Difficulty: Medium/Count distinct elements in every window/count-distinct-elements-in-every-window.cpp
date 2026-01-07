class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        vector<int> res;
        unordered_map<int, int> mp;
        for(int i = 0 ; i < k ; i++){
            mp[arr[i]]++;
        }
        res.push_back(mp.size());
        for(int i = k ; i < arr.size() ; i++){
            if(mp[arr[i - k]] == 1){
                mp.erase(arr[i - k]);
            }else{
                mp[arr[i - k]]--;
            }
            mp[arr[i]]++;
            res.push_back(mp.size());
        }
        return res;
    }
};