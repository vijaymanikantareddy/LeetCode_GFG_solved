class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int, int> mp;
        while(n > 0){
            int d = n%10;
            n /= 10;
            mp[d]++;
        }
        int mi = 999, fre = INT_MAX;
        for(auto it: mp){
            if(it.second < fre){
                mi = it.first;
                fre = it.second;
            }
            if(it.second == fre) mi = min(mi, it.first);
        }
        return mi;
    }
};