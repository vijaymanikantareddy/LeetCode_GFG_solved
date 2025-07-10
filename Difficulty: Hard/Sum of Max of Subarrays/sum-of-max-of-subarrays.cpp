class Solution {
  public:
    int sumOfMax(vector<int> &arr) {
        // code here
        int n = arr.size();
        // nge - next greater element
        // pge - previous greater element
        vector<int> nge(n, 0), pge(n, 0);
        stack<int> st;
        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && arr[i] > arr[st.top()]){
                st.pop();
            }
            pge[i] = st.empty()? -1: st.top();
            st.push(i);
        }
        
        while(!st.empty()) st.pop();
        
        for(int i = n - 1 ; i >= 0 ; i--){
            while(!st.empty() && arr[i] >= arr[st.top()]){
                st.pop();
            }
            nge[i] = st.empty()? n: st.top();
            st.push(i);
        }
            
        long long res = 0;
        for(int i = 0 ; i < n ; i++){
            long long left = (i - pge[i]);
            long long right = (nge[i] - i);
            res = res + (left * right * arr[i]);
        }
        
        return res;
    }
};