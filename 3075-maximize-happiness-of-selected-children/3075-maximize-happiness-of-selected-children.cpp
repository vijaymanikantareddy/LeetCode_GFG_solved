class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(), happiness.rend());
        long long res = 0;
        int i = 0;
        int cnt = 0;
        while(k > 0){
            if(happiness[i] - cnt <= 0){
                break;
            }
            res += (happiness[i] - cnt);
            cnt++;
            i++;
            k--;
        }
        return res;
    }
};