class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int res = 0;
        int n = citations.size();
        for(int i = 0 ; i < n ; i++){
            if(n - i <= citations[i]){
                res++;
            }
        }
        return res;
    }
};