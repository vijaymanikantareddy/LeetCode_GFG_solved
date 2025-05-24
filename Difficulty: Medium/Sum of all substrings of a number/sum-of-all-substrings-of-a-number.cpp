class Solution {
  public:
    int sumSubstrings(string &s) {
        // code here
        int res = 0;
        for(int i = 0 ; i < s.size() ; i++){
            for(int j = i ; j < s.size() ; j++){
                string temp = s.substr(i, j - i + 1);
                res += stoi(temp);
            }
        }
        return res;
    }
};