class Solution {
  public:
    vector<string> generateBinary(int n) {
        // code here
        vector<string> res;
        queue<string> q;
        q.push("1");
        for(int i = 1 ; i <= n ; i++){
            string curr = q.front();
            q.pop();
            res.push_back(curr);
            q.push(curr + "0");
            q.push(curr + "1");
        }
        return res;
    }
};