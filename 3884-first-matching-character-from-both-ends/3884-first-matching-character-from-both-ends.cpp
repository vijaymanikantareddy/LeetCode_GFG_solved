class Solution {
public:
    int firstMatchingIndex(string s) {
        for(int i = 0 ; i <= s.size()/2 ; i++){
            if(s[i] == s[s.size() - i - 1]){
                return i;
            }
        }
        return -1;
    }
};