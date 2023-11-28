class Solution {
public:
    int numberOfWays(string corridor) {
        int n = corridor.size();
        int i = 0, total = 0;
        int mod = 1e9 + 7;
        vector<int> score;
        while(i < n){
            if(corridor[i] == 'S'){
                total++;
            }
            
            if(total != 0 and total%2 == 0){
                i++;
                int cnt = 1;
                while(i < n && corridor[i] == 'P'){
                    cnt++;
                    i++;
                }
                if(i < n){
                    score.push_back(cnt);
                }
            }else{
                i++;
            }
        }
        if(total%2 == 1 || total == 0) return 0;
        long long ans = 1;
        for(auto it: score){
            ans = (ans * (long long)it)% mod;
        }
        return ans;
    }
};