class Solution {
public:
    bool ispalin(string s, int st, int en){
        while(st <= en){
            if(s[st++] != s[en--]) return false;
        }
        return true;
    }
    void fun(int index, string s, vector<string> path, vector<vector<string>>& res){
        if(index == s.size()){
            res.push_back(path);
            return;
        }
        for(int i = index ; i < s.size() ; i++){
            if(ispalin(s, index, i)){
                path.push_back(s.substr(index, i - index + 1));
                fun(i + 1, s, path, res);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        fun(0, s, path, res);
        return res;
    }
};