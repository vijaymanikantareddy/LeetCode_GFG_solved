class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i = 0 ; i < nums.size() ; i++){
            pq.push(nums[i]);
        }
        int res = 0;
        for(int i = 1 ; i <= k ; i++){
            int a = pq.top();
            pq.pop();
            res += a;
            pq.push(a+1);
        }
        
        return res;
    }
};