class Solution {
public:
    int scoreOfString(string s) {
        int res = 0;
        for(int i = 1 ; i < s.size() ; i++){
            int d = s[i] - s[i-1];
            res += abs(d);
        }
        return res;
    }
};