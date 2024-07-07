class Solution {
public:
    string getEncryptedString(string s, int k) {
        k = k%s.size();
        string res = "";
        for(int i = k ; i < s.size(); i++){
            res.push_back(s[i]);
        }
        for(int i = 0 ; i < k ; i++){
            res.push_back(s[i]);
        }
        return res;
    }
};