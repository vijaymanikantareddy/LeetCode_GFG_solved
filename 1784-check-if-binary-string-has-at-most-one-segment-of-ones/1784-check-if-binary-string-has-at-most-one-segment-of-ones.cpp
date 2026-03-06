class Solution {
public:
    bool checkOnesSegment(string s) {
        int ind = -1;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '0'){
                ind = i;
                break;
            }
        }
        if(ind == -1) return true;
        for(int i = ind ; i < s.size() ; i++){
            if(s[i] == '1'){
                return false;
            }
        }
        return true;
    }
};