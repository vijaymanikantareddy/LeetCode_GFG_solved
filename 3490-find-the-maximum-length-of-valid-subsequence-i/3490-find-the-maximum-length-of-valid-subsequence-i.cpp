class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int odd = 0, even = 0, res = 0;
        for(int i = 0 ; i < nums.size() ; ++i){
            if(nums[i]%2 == 0) even++;
            else odd++;
        }
        res = max(even, odd);
        int cnt = 1;
        int flag = (nums[0]%2 != 0);
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i]%2 != flag){
                cnt++;
                flag = !flag;
            }
        }
        return max(res, cnt);
    }
};