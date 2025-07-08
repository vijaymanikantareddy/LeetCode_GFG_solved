class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> res(n);
        stack<int> st;
        unordered_map<int, int> mp;
        for(int i = 0 ; i < n ; i++) mp[arr[i]]++;
        for(int i = n-1 ; i >= 0 ; i--){
            while(!st.empty() && mp[arr[st.top()]] <= mp[arr[i]]){
                st.pop();
            }
            res[i] = st.empty()? -1: arr[st.top()];
            st.push(i);
        }
        return res;
    }
};
