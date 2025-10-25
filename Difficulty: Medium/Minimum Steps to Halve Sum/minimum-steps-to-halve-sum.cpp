class Solution {
  public:
    int minOperations(vector<int>& arr) {
        // code here
        int res = 0;
        double sum = 0;
        priority_queue<double> pq;
        for(auto it: arr){
            sum += (it * 1.0);
            pq.push(it * 1.0);
        }
        double half = sum / 2.0;
        while(half < sum){
            double t = pq.top();
            pq.pop();
            sum -= (t / 2.0);
            pq.push(t / 2.0);
            res++;
        }
        return res;
    }
};