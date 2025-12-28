class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(), processorTime.end());
        sort(tasks.rbegin(), tasks.rend());
        int res = 0;
        int it = 0;
        vector<int> t;
        for(int i = 0 ; i < processorTime.size() ; i++){
            int curr = processorTime[i] + max({tasks[it], tasks[it + 1], tasks[it + 2], tasks[it + 3]});
            it += 4;
            t.push_back(curr);
        }
        for(auto ele: t){
            res = max(res, ele);
        }
        return res;
    }
};