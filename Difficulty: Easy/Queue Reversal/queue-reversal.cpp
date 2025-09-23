class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        vector<int> v;
        while(!q.empty()){
            v.push_back(q.front());
            q.pop();
        }
        while(!v.empty()){
            q.push(v.back());
            v.pop_back();
        }
    }
};