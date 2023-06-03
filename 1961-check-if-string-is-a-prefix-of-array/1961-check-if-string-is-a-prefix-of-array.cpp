class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string res = "";
        for(string ele: words){
            res += ele;
            if(s == res){
                return true;
            }
        }
        return false;
    }
};