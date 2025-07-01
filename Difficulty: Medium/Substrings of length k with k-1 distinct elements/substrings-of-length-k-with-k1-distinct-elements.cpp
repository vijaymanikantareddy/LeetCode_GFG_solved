class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        unordered_map<char, int> mp;
        int res = 0;
        for(int i = 0 ; i < k ; i++){
            mp[s[i]]++;
        }
        if(mp.size() == k - 1) res++;
        for(int i = k ; i < s.size() ; i++){
            mp[s[i]]++;
            mp[s[i - k]]--;
            if(mp[s[i - k]] == 0) mp.erase(s[i - k]);
            if(mp.size() == k - 1) res++;
        }
        return res;
    }
};