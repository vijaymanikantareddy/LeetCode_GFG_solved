class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal) return true;
        if(s.size() != goal.size()) return false;
        string a = s+s;
        int n = s.size();
        for(int i = 0 ; i < s.size() ; i++){
            if(a.substr(i, n) == goal) return true;
        }
        return false;
    }
};