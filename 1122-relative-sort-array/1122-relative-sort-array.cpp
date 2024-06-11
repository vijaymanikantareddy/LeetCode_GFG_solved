class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mp;
        for(int i = 0 ; i < arr2.size() ; i++) mp[arr2[i]] = i;
        for(auto it: arr1){
            if(mp.find(it) == mp.end()){
                mp[it] = arr1.size();
            }
        }
        sort(arr1.begin(), arr1.end(), [&](int a, int b){
            if(mp[a] == mp[b]){
                return a < b;
            }
            return mp[a] < mp[b];
        });
        return arr1;
    }
};