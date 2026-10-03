class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int res = 0, cnt = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                st.push(i);
            }else{
                st.pop();
            }
            if(st.empty()) st.push(i);
            else res = max(res, i - st.top());
        }
        return res;
    }
};