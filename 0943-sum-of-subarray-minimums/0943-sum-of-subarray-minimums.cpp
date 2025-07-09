class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n), pse(n);
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
            nse[i] = st.empty()? n : st.top();
            st.push(i);
        }

        long long res = 0;
        long long mod = 1e9 + 7;
        for(int i = 0 ; i < n ; i++){
            long long left = i - pse[i];
            long long right = nse[i] - i;
            res = (res + (left * right * arr[i]) % mod) % mod;
        }
        return res;
    }
};