class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        if(s.size() < 3) return s;
        int i = 0;
        while(i < s.size()-2){
            if(!(s[i] == s[i+1] && s[i] == s[i+2])){
                res.push_back(s[i]);
            }
            i++;
        }
        res.push_back(s[s.size()-2]);
        res.push_back(s.back());
        return res;
    }
};