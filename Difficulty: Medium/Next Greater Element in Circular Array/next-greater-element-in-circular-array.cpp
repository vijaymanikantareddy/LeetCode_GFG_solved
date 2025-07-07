class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // code here
        int mxind = 0;
        int mx = arr[0];
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] > mx){
                mxind = i;
                mx = arr[i];
            }
        }
        int n = arr.size();
        vector<int> res(n, -1);
        stack<int> st;
        for(int i = mxind ; i >= 0 ; i--){
            while(!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();
            }
            if(!st.empty()) res[i] = arr[st.top()];
            st.push(i);
        }
        for(int i = n - 1 ; i > mxind ; i--){
            while(!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();
            }
            if(!st.empty()) res[i] = arr[st.top()];
            st.push(i);
        }
        return res;
    }
};