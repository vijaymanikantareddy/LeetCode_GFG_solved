class Solution {
public:
    bool fun(string& s, string& p, vector<vector<int>>& dp, 
            int i, int j, int n, int m){
        if(i == n && j == m){
            return true;
        }
        if(i == n){
            while(j < m && p[j] == '*'){
                j++;
            }
            return (j == m);
        }
        if(j == m){
            return false;
        }
        if(dp[i][j] != -1) return dp[i][j];
        bool ans = false;
        if(s[i] == p[j] or p[j] == '?'){
            ans = fun(s, p, dp, i + 1, j + 1, n, m);
        }else if(p[j] == '*'){
            ans = fun(s, p, dp, i, j + 1, n, m) or
                    fun(s, p, dp, i + 1, j + 1, n, m) or
                    fun(s, p, dp, i + 1, j, n, m);
        }
        return dp[i][j] = ans;
    }
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return fun(s, p, dp, 0, 0, n, m);
    }
};