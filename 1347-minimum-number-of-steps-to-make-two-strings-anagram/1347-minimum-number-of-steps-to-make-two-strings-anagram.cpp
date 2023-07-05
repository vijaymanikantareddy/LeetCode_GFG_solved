class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> v(26, 0);
        for(int i = 0 ; i < s.size() ; i++){
            int d = s[i]-'a';
            v[d]++;
        }
        for(int i = 0 ; i < t.size() ; i++){
            int d = t[i]-'a';
            v[d]--;
        }
        int res = 0;
        for(int i = 0 ; i < 26 ; i++){
            if(v[i] > 0){
                res += v[i];
            }
        }
        return res;
    }
};