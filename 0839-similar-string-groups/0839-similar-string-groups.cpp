class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        vector<int> vis(strs.size(), 0);
        int res = 0;
        for(int i = 0 ; i < strs.size() ; i++){
            if(!vis[i]){
                res++;
                fun(vis, strs, i);
            }
        }
        return res;
    }
    void fun(vector<int>& vis, vector<string> &strs, int ind){
        vis[ind] = 1;
        for(int i = 0 ; i < strs.size() ; i++){
            if(!vis[i]){
                if(similar(strs[ind], strs[i])){
                    fun(vis, strs, i);
                }
            }
        }
    }
    bool similar(string a, string b){
        int cnt = 0;
        for(int i = 0 ; i < a.size() ; i++){
            if(a[i] != b[i]){
                cnt++;
            }
        }
        return (cnt==0||cnt==2);
    }
};