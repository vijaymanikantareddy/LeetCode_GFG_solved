class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        int count=0;
        vector<int> v = colors;
        for(int i = 0; i < k-1; i++){
            v.push_back(colors[i]);
        }
        int res = 0, cnt = 1;
        for(int i = 1; i < n + k-1 ;i++){
            if(v[i]!= v[i-1]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            if(cnt >= k){
                res++;
            }
        }
        return res;
    }
};