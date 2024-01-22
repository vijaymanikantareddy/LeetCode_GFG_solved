class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int a: nums){
            mp[a]++;
        }
        int dup;
        for(auto it: mp){
            if(it.second > 1){
                dup = it.first;
                break;
            }
        }
        for(int i = 1 ; i <= nums.size() ; i++){
            if(mp[i] == 0){
                return {dup, i};
            }
        }
        return {};
    }
};