class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> res(temperatures.size(), 0);
        st.push(0);
        int i = 1, n = temperatures.size();
        while(i < n){
            int t = st.top();
            if(temperatures[i] <= temperatures[t]){
                st.push(i);
            }else{
                while(!st.empty() && temperatures[st.top()] < temperatures[i]){
                    res[st.top()] = i-st.top();
                    st.pop();
                }
                st.push(i);
            }
            i++;
        }
        return res;
    }
};