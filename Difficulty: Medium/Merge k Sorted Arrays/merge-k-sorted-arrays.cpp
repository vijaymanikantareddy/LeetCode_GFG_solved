// User function Template for C++

class Solution {
  public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>>& arr, int K) {
        // code here
        vector<int> res;
        priority_queue<pair<int, pair<int, int>>, 
            vector<pair<int, pair<int, int>>>, greater<>> pq;
        for(int i = 0 ; i < K ; i++){
            pq.push({arr[i][0], {i, 0}});
        }
        while(!pq.empty()){
            int num = pq.top().first;
            int i = pq.top().second.first;
            int j = pq.top().second.second;
            pq.pop();
            res.push_back(num);
            if(++j != K)
                pq.push({arr[i][j], {i, j}});
        }
        return res;
    }
};