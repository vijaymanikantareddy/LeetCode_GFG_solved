class Solution {
public:
    int maxDepth(string s) {
        int cnt=0, mx=0;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='('){
                cnt++;
                mx = max(cnt, mx);
            }
            else if(s[i]==')'){
                cnt--;
            }
        }
        return mx;
    }
};