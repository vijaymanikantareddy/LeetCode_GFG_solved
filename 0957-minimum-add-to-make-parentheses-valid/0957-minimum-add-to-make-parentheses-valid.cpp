class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int res = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            if(s[i] == ')'){
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        return st.size();
    }
};