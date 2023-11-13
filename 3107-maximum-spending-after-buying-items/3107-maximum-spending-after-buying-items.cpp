class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
        int m = values.size(), n = values[0].size();
        long long ans = 0;
        int cnt = 1;
        priority_queue<int, vector<int>, greater<>> pq;
        for(int i = 0 ; i < m ; i++){
            for(int j = n-1 ; j >= 0 ; j--){
                pq.push(values[i][j]);
            }
        }
        while(!pq.empty()){
            long long t = pq.top();
            ans += (t*cnt);
            cnt++;
            pq.pop();
        }
        return ans;
    }
};