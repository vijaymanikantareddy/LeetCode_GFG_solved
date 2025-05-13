class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        vector<long long> mp(26, 0);
        int mod = 1e9 + 7;
        for(long long i = 0 ; i < s.size() ; i++){
            char ch = s[i];
            mp[ch - 'a']++;
        }
        for(long long i = 0 ; i < t ; i++){
            long long zcnt = mp[25];
            for(long long j = 24 ; j >= 0 ; j--){
                mp[j + 1] = mp[j];
            }
            mp[0] = zcnt;
            mp[1] = (mp[1] + zcnt)% mod;
        }
        long long res = 0;
        for(int i = 0 ; i < 26 ; i++){
            res += mp[i];
            res %= mod;
        }
        return res;
    }
};