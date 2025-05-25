class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> mp;
        for(auto it: words) mp[it]++;
        int res = 0;
        bool flag = false;
        for(auto & it: mp){
            string a = it.first;
            string b = string() + a[1] + a[0];
            if(a == b){
                res += (it.second / 2) * 4;
                if(it.second % 2) flag = true;
            }else if(mp.find(b) != mp.end()){
                int pairs = min(mp[a], mp[b]);
                res += 4 * pairs;
                mp[a] -= pairs;
                mp[b] -= pairs;
            }
        }
        if(flag) res += 2;
        return res;
    }
};