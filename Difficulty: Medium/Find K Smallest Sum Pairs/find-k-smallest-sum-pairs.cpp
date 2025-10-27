class Solution {
  public:
    vector<vector<int>> kSmallestPair(vector<int> &arr1, vector<int> &arr2, int k) {
        // code here
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        vector<vector<int>> res;
        for(int i = 0 ; i < arr1.size() ; i++){
            pq.push({arr1[i] + arr2[0], i, 0});
        }
        while(res.size() < k && !pq.empty()){
            auto it = pq.top(); pq.pop();
            int i = it[1], j = it[2];
            res.push_back({arr1[i], arr2[j]});
            if(j + 1 < arr2.size()){
                pq.push({arr1[i] + arr2[j + 1], i, j + 1});
            }
        }
        return res;
    }
};
