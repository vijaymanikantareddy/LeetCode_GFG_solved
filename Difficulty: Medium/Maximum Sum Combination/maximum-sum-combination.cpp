class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i = a.size()-1 ; i >= 0 ; i--){
            for(int j = b.size()-1 ; j >= 0 ; j--){
                int s = a[i] + b[j];
                if(pq.size() < k){
                    pq.push(s);
                }else if(pq.top() < s){
                    pq.pop();
                    pq.push(s);
                }else{
                    break;
                }
            }
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top());
            pq.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};