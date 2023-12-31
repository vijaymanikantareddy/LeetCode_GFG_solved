class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> a(26, INT_MAX), b(26, INT_MIN);
        for(int i = 0 ; i < s.size() ; i++){
            int d = s[i] - 'a';
            a[d] = min(a[d], i);
            b[d] = max(b[d], i);
        }
        int res = -1;
        for(int i = 0 ; i < 26 ; i++){
            if(a[i] != INT_MAX && b[i] != INT_MIN){
                res = max(res, b[i] - a[i] - 1);
            }
        }
        return res;
    }
};