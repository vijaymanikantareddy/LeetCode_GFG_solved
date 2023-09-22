class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while(i < t.size()){
            if(j < s.size() && s[j] == t[i])
            {
                j++;
            }
            i++;
        }
        return j >= s.size();
    }
};