class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i = 0 ; i < s.size() ; i++){
            int su = s[i]-'A';
            int sl = s[i]-'a';
            if(!st.empty()){
                int stu = st.top()-'A';
                int stl = st.top()-'a';
                if(st.top() >= 'A' && st.top() <= 'Z' && stu == sl){
                    st.pop();
                }
                else if(st.top() >= 'a' && st.top() <= 'z' && stl == su){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }else{
                st.push(s[i]);
            }
        }
        string res = "";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};