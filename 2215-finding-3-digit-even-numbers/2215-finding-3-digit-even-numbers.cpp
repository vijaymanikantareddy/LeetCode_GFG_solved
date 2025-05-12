class Solution {
public:
    unordered_map<int, int> mp;
    bool fun(int num){
        unordered_map<int, int> a;
        while(num > 0){
            int d = num%10;
            a[d]++;
            num /= 10;
        }
        for(auto it: a){
            if(mp[it.first] < it.second) return false;
        }
        return true;
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        for(auto it: digits) mp[it]++;
        vector<int> res;
        for(int i = 100 ; i < 999 ; i+=2){
            if(fun(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};