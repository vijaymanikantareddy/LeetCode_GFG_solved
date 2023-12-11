class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int, int> mp;
        for(auto it: arr) mp[it]++;
        int n = arr.size();
        int mx = 1, res = arr[0];
        for(auto it: mp){
            if(it.second > mx){
                mx = it.second;
                res = it.first;
            }
        }
        return res;
    }
};