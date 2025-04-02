class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        using ll = long long;
        long long res = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                for(int k = j+1 ; k < n ; k++){
                    long long t = ((ll) nums[i]- (ll) nums[j])* (ll) nums[k];
                    res = max(res, t);
                }
            }
        }
        return res > 0? res: 0;
    }
};