class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]].push_back(i);
        }
        int res = INT_MAX;
        for(auto it: mp){
            if(it.second.size() > 2){
                int temp = INT_MAX;
                for(int i = 0 ; i < it.second.size() - 2 ; i++){
                    int a = it.second[i];
                    int b = it.second[i + 1];
                    int c = it.second[i + 2];
                    temp = min(temp, 2 * (c - a));
                }
                res = min(res, temp);
            }
        }
        if(res == INT_MAX) return -1;
        return res;
    }
};