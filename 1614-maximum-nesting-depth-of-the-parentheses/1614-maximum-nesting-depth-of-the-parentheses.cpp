class Solution {
public:
    int maxDepth(string s) {
        int mx = 0;
        int cnt = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                cnt++;
                mx = max(mx, cnt);
            }else if(s[i] == ')'){
                cnt--;
            }
        }
        return mx;
    }
};