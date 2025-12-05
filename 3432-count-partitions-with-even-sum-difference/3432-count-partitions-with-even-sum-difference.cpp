class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n, 0);
        pre[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            pre[i] = pre[i - 1] + nums[i];
        }
        int result = 0;
        for(int i = 0 ; i < n - 1 ; i++){
            // cout << pre[i] << " " << pre[n - 1] - pre[i] << endl;
            if((pre[n - 1] - 2 * pre[i]) % 2 == 0) result++;
        }
        return result;
    }
};