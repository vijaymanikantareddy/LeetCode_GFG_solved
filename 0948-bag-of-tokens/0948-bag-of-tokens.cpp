class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int i = 0, j = tokens.size()-1;
        sort(tokens.begin(), tokens.end());
        int ans = 0, score = 0;
        while(i <= j){
            if(tokens[i] <= power){
                score++;
                ans = max(ans, score);
                power -= tokens[i++];
            }else if(score > 0){
                score--;
                power += tokens[j--];
            }else{
                break;
            }
        }
        return ans;
    }
};