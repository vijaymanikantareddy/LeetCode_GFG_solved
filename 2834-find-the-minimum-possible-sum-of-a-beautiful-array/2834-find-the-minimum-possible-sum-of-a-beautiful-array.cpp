class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long res = 1;
        int i = 1 ;
        map<int, int> mp;
        mp[i++]++;
        while(mp.size() < n){
            if(mp.find(target-i) == mp.end()){
                res += i;
                mp[i]++;
            }
            i++;
        }
        return res;
    }
};