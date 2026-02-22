class Solution {
public:
    bool isDigitorialPermutation(int n) {
        vector<int> dp(10, 1);
        for(int i = 1 ; i < 10 ; i++){
            dp[i] = dp[i - 1] * i; 
        }
        string s = to_string(n);
        sort(s.begin(), s.end());
        int s_len = s.size();
        long long sum = 0;
        int temp = n;
        while(temp > 0){
            int d = temp % 10;
            sum += dp[d];
            temp /= 10;
        }

        int cnt = 0;
        do{
            int num = stoi(s);
            // cout << num << " " << sum << endl;
            if(num == sum && to_string(num).size() == s_len){
                return true;
            }
        }while(next_permutation(s.begin(), s.end()));
        int num = stoi(s);
        // cout << num << " " << sum << endl;
        if(num == sum && to_string(num).size() == s_len){
            return true;
        }
        return false;
    }
};