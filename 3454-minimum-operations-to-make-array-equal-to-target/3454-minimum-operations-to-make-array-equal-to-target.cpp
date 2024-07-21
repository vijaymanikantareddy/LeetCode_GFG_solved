using ll = long long;
class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        vector<ll> v;
        for(int i = 0 ; i < nums.size() ; i++){
            v.push_back(nums[i] - target[i]);
        }
        ll res = 0, s = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i == 0 or (v[i-1] > 0 and v[i] > 0) 
                or (v[i-1] < 0 and v[i] < 0)){
                int di = abs(v[i]) - abs(s);
                if(di > 0){
                    res += di;
                }
            }else{
                res += abs(v[i]);
            }
            s = v[i];
        }
        return res;
    }
};