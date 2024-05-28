class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> di;
        for(int i = 0 ; i < s.size() ; i++){
            di.push_back(abs(s[i] - t[i]));
        }
        int l = 0, r = 0, res = 0;
        long long sum = 0;
        while(r < s.size()){
            sum += di[r];
            while(sum > maxCost && l <= r){
                sum -= di[l++];
            }
            res = max(res, r-l+1);
            r++;
        }
        return res;
    }
};