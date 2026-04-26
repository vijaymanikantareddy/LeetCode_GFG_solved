class Solution {
  public:
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
        // code here
        unordered_map<int, int> mp;
        unordered_map<int, int> temp;
        vector<int> res;
        for(auto it: arr1){
            if(mp.find(it) == mp.end()) mp[it]++;
        }
        for(auto it: mp) temp[it.first]++;
        mp.clear();
        for(auto it: arr2){
            if(mp.find(it) == mp.end()) mp[it]++;
        }
        for(auto it: mp) temp[it.first]++;
        mp.clear();
        for(auto it: arr3){
            if(mp.find(it) == mp.end()) mp[it]++;
        }
        for(auto it: mp) temp[it.first]++;
        for(auto it: temp){
            if(it.second == 3) res.push_back(it.first);
        }
        sort(res.begin(), res.end());
        return res;
    }
};