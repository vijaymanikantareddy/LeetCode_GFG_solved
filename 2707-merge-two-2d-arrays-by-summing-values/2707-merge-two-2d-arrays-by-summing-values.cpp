class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<int> arr(1001, 0);
        for(auto it: nums1){
            arr[it[0]] += it[1];
        }
        for(auto it: nums2){
            arr[it[0]] += it[1];
        }
       
        vector<vector<int>> res;
        for(int i = 0 ; i < 1001 ; i++){
            if(arr[i] != 0){
                res.push_back({i, arr[i]});
            }
        }
        return res;
    }
};