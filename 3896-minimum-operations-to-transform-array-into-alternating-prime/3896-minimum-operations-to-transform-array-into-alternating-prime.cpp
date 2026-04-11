class Solution {
public:
    vector<bool> isprime;
    vector<int> prime;
    void primeCal(){
        int n = 2e5;
        isprime.assign(n + 1, 1);
        isprime[0] = isprime[1] = 0;
        for(int i = 2 ; i*i <= n ; i++){
            if(isprime[i]){
                for(int j = i * i ; j <= n ; j += i){
                    isprime[j] = 0;
                }
            }
        }
        for(int i = 2 ; i <= n ; i++){
            if(isprime[i]){
                prime.push_back(i);
            }
        }
    }
    int minOperations(vector<int>& nums) {
        primeCal();
        int res = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i%2 == 0){
                if(!isprime[nums[i]]){
                    int id = lower_bound(prime.begin(), prime.end(), nums[i]) - prime.begin();
                    res += prime[id] - nums[i];
                }
            }else{
                if(isprime[nums[i]]){
                    if(nums[i] == 2){
                        res += 2;
                    }else{
                        res += 1;
                    }
                }
            }
        }
        return res;
    }
};