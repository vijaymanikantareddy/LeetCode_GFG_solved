class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        map<int, int> mp;
        int res = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
            if(mp.find(k - nums[i]) != mp.end()){
                if(k-nums[i] == nums[i]){
                    if(mp[nums[i]] > 1){
                        res++;
                        mp[nums[i]] -= 2;
                    }
                }else{
                    res++;
                    if(mp[nums[i]] == 1){
                        mp.erase(nums[i]);
                    }else{
                        mp[nums[i]]--;
                    }
                    if(mp[k-nums[i]] == 1){
                        mp.erase(k - nums[i]);
                    }else{
                        mp[k-nums[i]]--;
                    }
                }
            }
        }
        return res;
    }
};