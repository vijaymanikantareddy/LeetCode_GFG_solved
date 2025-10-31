class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int, int> mp;
        for(auto it: nums) mp[it]++;
        vector<int> res;
        for(auto it: mp){
            if(it.second == 2){
                res.push_back(it.first);
            }
        }
        return res;
    }
};