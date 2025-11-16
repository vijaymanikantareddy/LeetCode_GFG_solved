class Solution {
public:
    int numSub(string s) {
        int mod = 1e9 + 7;
        vector<int> v;
        int cnt = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '1'){
                cnt++;
            }else{
                if(cnt > 0){
                    v.push_back(cnt);
                    cnt = 0;
                }
            }
        }
        if(cnt > 0){
            v.push_back(cnt);
        }
        long long res = 0;
        for(auto it: v){
            // cout << it << " ";
            long long lit = it;
            res += ((lit + 1) * (lit) / 2) % mod;
            res %= mod;
        }
        return res;
    }
};