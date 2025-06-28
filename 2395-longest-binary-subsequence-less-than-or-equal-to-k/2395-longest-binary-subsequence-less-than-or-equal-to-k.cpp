class Solution {
public:
    int longestSubsequence(string s, int k) {
        int res = 0;
        long long value = 0;
        int i = 0;
        int n = s.size();
        while(i < min(n, 32)){
            if(s[n - i - 1] == '1'){
                long long cal = pow(2, i);
                if(value + cal > k){
                    break;
                }
                value += cal;
            }
            i++;
        }
        int removing = 0;
        while(i < n){
            if(s[n - i - 1] == '1') removing++;
            i++;
        }
        return n - removing;
    }
};