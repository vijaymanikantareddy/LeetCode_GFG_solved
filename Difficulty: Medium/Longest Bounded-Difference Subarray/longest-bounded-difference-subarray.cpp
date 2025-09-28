class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        // code here
        map<int, int> mp;
        int i = 0, j = 0;
        int maxLen = 0;
        int l = 0, r = 0;
        while(j < arr.size()){
            mp[arr[j]]++;
            while(i < j){
                int fi = mp.begin()->first;
                int la = (--mp.end())->first;
                if(la - fi > x){
                    if(mp[arr[i]] == 1) mp.erase(arr[i]);
                    else mp[arr[i]]--;
                    i++;
                }else{
                    break;
                }
            }
            if(maxLen < j - i + 1){
                l = i;
                r = j;
                maxLen = j - i + 1;
            }
            j++;
        }
        vector<int> res;
        for(int it = l ; it <= r; it++){
            res.push_back(arr[it]);
        }
        return res;
    }
};