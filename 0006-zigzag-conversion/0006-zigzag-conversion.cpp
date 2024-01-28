class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> res(numRows, "");
        int i = 0;
        while(i < s.size()){
            for(int j = 0 ; j < numRows && i < s.size() ; j++){
                res[j] += s[i++];
            }
            for(int j = numRows-2 ; j > 0 && i < s.size() ; j--){
                res[j] += s[i++];
            }
        }
        string ans;
        for(auto it: res) ans += it;
        return ans;
    }
};