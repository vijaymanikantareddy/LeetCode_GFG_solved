class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> se;
        for(auto it: a) se.insert(it);
        for(auto it: b) se.insert(it);
        return vector<int>(se.begin(), se.end());
    }
};