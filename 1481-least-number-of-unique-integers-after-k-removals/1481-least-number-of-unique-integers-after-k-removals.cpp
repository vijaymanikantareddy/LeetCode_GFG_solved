class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        if(k == arr.size()) return 0;
        unordered_map<int, int> mp;
        for(auto it: arr) mp[it]++;
        vector<pair<int, int>> vc;
        for(auto it: mp) vc.push_back({it.second, it.first});
        sort(vc.begin(), vc.end());
        int n = vc.size();
        int ind = 0;
        for(int i = 0 ; i < n ; i++){
            if(vc[i].first <= k){
                k -= vc[i].first;
            }else{
                ind = i;
                break;
            }
        }
        return n - ind;
    }
};