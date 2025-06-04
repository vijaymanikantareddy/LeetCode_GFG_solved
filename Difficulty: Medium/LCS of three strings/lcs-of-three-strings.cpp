class Solution {
  public:
    int lcsOf3(string& s1, string& s2, string& s3) {
        // Code here
        vector<vector<vector<int>>> dp(s1.size()+1, vector<vector<int>>(s2.size()+1,
            vector<int>(s3.size()+1, 0)));
        for(int i = 0 ; i < s1.size() ; i++){
            for(int j = 0 ; j < s2.size() ; j++){
                for(int k = 0 ; k < s3.size() ; k++){
                    if(s1[i] == s2[j] && s2[j] == s3[k]){
                        dp[i+1][j+1][k+1] = 1 + dp[i][j][k];
                    }else{
                        dp[i+1][j+1][k+1] = max({dp[i+1][j+1][k], 
                        dp[i+1][j][k+1], 
                        dp[i][j+1][k+1]});
                    }
                }
            }
        }
        return dp[s1.size()][s2.size()][s3.size()];
    }
};
