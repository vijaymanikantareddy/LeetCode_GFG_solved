class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]]++;
        }
        int res = -1;
        for(auto it: mp){
            if(it.first == it.second && res < it.first){
                res = it.first;
            }
        }
        return res;
    }
};