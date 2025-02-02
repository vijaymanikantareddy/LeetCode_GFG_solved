class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        nums.push_back(nums.front());
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] < nums[i-1]){
                cnt++;
            }
        }
        // if(nums.front() > nums.back()) cnt++;
        // cout << cnt << endl;]
        return (cnt <= 1);
    }
};