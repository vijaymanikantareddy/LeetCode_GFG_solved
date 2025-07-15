class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        vector<int> pse(n, 0), nse(n, 0);
        stack<int> st;
        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            pse[i] = st.empty()? -1: st.top();
            st.push(i);
        }
        
        while(!st.empty()) st.pop();
        
        for(int i = n - 1 ; i >= 0 ; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            nse[i] = st.empty()? n: st.top();
            st.push(i);
        }
        long long res = 0;
        for(int i = 0 ; i < n ; i++){
            long long area = (nse[i] - pse[i] - 1) * arr[i];
            res = max(res, area);
        }
        return res;
    }
};
