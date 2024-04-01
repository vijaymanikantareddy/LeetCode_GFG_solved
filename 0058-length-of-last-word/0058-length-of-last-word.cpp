class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int sp=0;
        while(s[sp]==' '){
            sp++;
        }
        int cnt=0;
        for(int i=sp ; i<s.size(); i++){
            if(s[i]==' ')
                break;
            cnt++;
        }
        return cnt;
    }
};