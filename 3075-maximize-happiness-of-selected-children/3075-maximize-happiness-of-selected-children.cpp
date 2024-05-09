class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());
        long long res = 0, vi = 0;
        int i = happiness.size()-1;
        while(k > 0){
            if(happiness[i]-vi <= 0){
                break;
            }
            res += happiness[i] - vi;
            // cout << res << " " << happiness[i] << " " << vi << endl;
            i--;
            vi++;
            k--;
        }
        return res;
    }
};