class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                st.push(i);
            }else if(s[i] == ')'){
                int a = st.top();
                int b = i;
                reverse(s.begin() + a, s.begin() + b);
                st.pop();
            }
        }
        string res = "";
        for(auto it: s) if(it != ')' and it != '(') res.push_back(it);
        return res;
    }
};