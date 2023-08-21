class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        int res = 0;
        for(auto it: mp){
            if(k != 0 && mp.find(it.first+k) != mp.end()){
                res++;
            }
            else if(k == 0 && it.second > 1){
                res++;
            }
        }
        return res;
    }
};