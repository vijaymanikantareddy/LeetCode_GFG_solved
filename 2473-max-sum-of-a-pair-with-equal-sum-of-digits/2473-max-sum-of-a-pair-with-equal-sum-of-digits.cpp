class Solution {
public:
    int sod(int n){
        int s=0;
        while(n){
            s += n%10;
            n/=10;
        }
        return s;
    }
    int maximumSum(vector<int>& nums) {
        map<int, vector<int>> mp;
        int mx=-1;
        for(int i=0 ; i<nums.size() ; i++){
            mp[sod(nums[i])].push_back(nums[i]);
        }
        if(mp.size()==nums.size()){
            return -1;
        }
        for(auto& it: mp){
            int s = 0;
            if(it.second.size() > 1){
                sort(it.second.begin(), it.second.end());
                s += it.second.back();
                it.second.pop_back();
                s += it.second.back();
            }
            mx = mx < s? s: mx;
        }
        return mx;
    }
};