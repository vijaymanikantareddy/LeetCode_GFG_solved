class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int res = 0;
        int n = strs.size();
        int m = strs[0].size();
        for(int i = 0 ; i < m ; i++){
            for(int j = 1 ; j < n ; j++){
                if(strs[j][i] < strs[j - 1][i]){
                    res++;
                    break;
                }
            }
        }
        return res;
    }
};