class Solution {
public:
    int maxDepth(string s) {
        int cnt=0, max=0;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='('){
                cnt++;
                max = cnt>max? cnt: max;
            }
            else if(s[i]==')'){
                cnt--;
            }
        }
        return max;
    }
};