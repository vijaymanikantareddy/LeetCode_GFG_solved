class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        long long s = 0;
        for(auto it: rolls) s += it;
        int m = rolls.size();
        long long total = mean * (m + n);
        long long required = total - s;
        if(required < n or required > n*6) return {};
        // cout << s << " " << total << " " << required;
        vector<int> arr(n, 1);
        required -= n;
        int i = 0;
        while(required > 0){
            if(arr[i] < 6){
                required--;
                arr[i]++;
            }else i++;
        }
        return arr;
    }
};