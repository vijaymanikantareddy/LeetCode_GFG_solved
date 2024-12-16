class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>,
            greater<pair<int, int>>> pq;
        for(int i = 0 ; i < n ; ++i){
            pq.push({nums[i], i});
        }
        for(int i = 0 ; i < k ; i++){
            int mi = pq.top().first;
            int ind = pq.top().second;
            pq.pop();
            nums[ind] = (mi * multiplier);
            pq.push({nums[ind], ind});
        }
        return nums;
    }
};