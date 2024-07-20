class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> mp;
        for(auto it: s) mp[it]++;
        int ans = 0;
        for(auto it: mp){
            if(it.second <= 2){
                ans += it.second;
            }else if(it.second%2){
                ans += 1;
            }else{
                ans += 2;
            }
        }
        return ans;
    }
};