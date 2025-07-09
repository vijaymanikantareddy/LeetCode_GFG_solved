class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        // code here
        int n = arr.size();
        // nse - next smaller element
        // pse - previous smaller element
        vector<int> nse(n, 0), pse(n, 0);
        stack<int> st;
        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && arr[i] < arr[st.top()]){
                st.pop();
            }
            pse[i] = st.empty()? -1: st.top();
            st.push(i);
        }
        
        while(!st.empty()) st.pop();
        
        for(int i = n - 1 ; i >= 0 ; i--){
            while(!st.empty() && arr[i] <= arr[st.top()]){
                st.pop();
            }
            nse[i] = st.empty()? n: st.top();
            st.push(i);
        }
            
        long long res = 0;
        for(int i = 0 ; i < n ; i++){
            long long left = (i - pse[i]);
            long long right = (nse[i] - i);
            res = res + (left * right * arr[i]);
        }
        
        return res;
    }
};