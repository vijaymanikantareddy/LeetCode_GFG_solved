class Solution {
public:
    vector<int> res;
    void dfs(int n, long long curr){
        if(curr > n) return ;
        res.push_back(curr);
        for(int i = 0 ; i <= 9 ; i++){
            dfs(n, curr * 10 + i);
        }
    }
    vector<int> lexicalOrder(int n) {
        for(int i = 1 ; i <= 9 ; i++){
            dfs(n, (long long) i);
        }
        return res;
    }
};