class Solution {
public:
    int countAsterisks(string s) {
        int cnt = 0, res = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '|'){
                cnt++;
            }
            if(cnt%2 == 0 && s[i] == '*'){
                res++;
            }
        }
        return res;
    }
};