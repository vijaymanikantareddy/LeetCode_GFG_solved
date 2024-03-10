class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp, mp2;
        vector<int> res;
        for(int i: nums1)
            mp[i]++;
        for(int i: nums2)
            mp2[i]++;
        for(auto it: mp){
            if(mp2[it.first]!=0){
                res.push_back(it.first);
            }
        }
        return res;
    }
};