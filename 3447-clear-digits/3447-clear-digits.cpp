class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(int i = 0 ; i < s.size() ; i++){
            char ch = s[i];
            bool isd = (ch >= '0' && ch <= '9');
            if(isd){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                st.push(ch);
            }
        }
        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};