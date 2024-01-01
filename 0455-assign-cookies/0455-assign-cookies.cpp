class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int res = 0, i = 0, j = 0;
        while(i < g.size() && j < s.size()){
            if(s[j] >= g[i]){
                i++;
                j++;
                res++;
            }else{
                j++;
            }
        }
        return res;
    }
};