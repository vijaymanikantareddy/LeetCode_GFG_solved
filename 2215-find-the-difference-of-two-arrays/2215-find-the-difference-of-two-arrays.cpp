class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> a, b;
        for(int ele: nums1){
            a[ele]++;
        }
        for(int ele: nums2){
            b[ele]++;
        }
        vector<vector<int>> res(2);
        for(auto it: a){
            if(b.find(it.first) == b.end()){
                res[0].push_back(it.first);
            }
        }
        for(auto it: b){
            if(a.find(it.first) == a.end()){
                res[1].push_back(it.first);
            }
        }
        return res;
    }
};