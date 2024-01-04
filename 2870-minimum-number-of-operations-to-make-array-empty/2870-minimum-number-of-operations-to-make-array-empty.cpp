class Solution {
public:
    int fun(int n){
        if(n == 1) return -1;
        if(n%3 == 0) return n/3;
        if(n%3 == 1){
            int t = (n-4)/3 + 2;
            return t;
        }
        if(n%3 == 2){
            int t = (n-2)/3 + 1;
            return t;
        }
        if(n%2 == 0) return n/2;
        return -1;
    }
    int minOperations(vector<int>& nums) {
        map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        int res = 0;
        for(auto it: mp){
            int t = fun(it.second);
            if(t != -1){
                res += t;
            }else{
                return -1;
            }
        }
        return res;
    }
};