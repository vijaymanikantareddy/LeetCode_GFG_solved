class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> se;
        for(auto it: nums1) se.insert(it);
        for(int i = 0 ; i < nums2.size() ; i++){
            if(se.find(nums2[i]) != se.end()) return nums2[i];
        }
        return -1;
    }
};