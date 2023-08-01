class Solution {
public:
    set<vector<int>> res;
    void fun(int n, int k, int start, vector<int> temp){
        if(temp.size() == k){
            res.insert(temp);
            return;
        }
        for(int i = start ; i <= n ; i++){
            temp.push_back(i);
            fun(n, k, i+1, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        fun(n, k, 1, temp);
        return vector(res.begin(), res.end());
    }
};