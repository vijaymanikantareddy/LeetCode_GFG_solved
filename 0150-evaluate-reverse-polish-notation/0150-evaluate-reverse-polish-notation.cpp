class Solution {
public:
    bool isop(string s){
        return (s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/');
    }
    int evalRPN(vector<string>& tokens) {
        int res = 0;
        stack<int> st;
        st.push(stoi(tokens[0]));
        for(int i = 1 ; i < tokens.size() ; i++){
            if(tokens[i].size() == 1 && isop(tokens[i])){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(tokens[i] == "+"){
                    st.push(b+a);
                }else if(tokens[i] == "-"){
                    st.push(b-a);
                }else if(tokens[i] == "*"){
                    st.push(b*a);
                }else{
                    st.push(b/a);
                }
            }else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};