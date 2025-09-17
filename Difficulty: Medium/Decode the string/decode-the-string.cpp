class Solution {
  public:
    string decodedString(string &s) {
        // code here
        stack<char> st;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ']'){
                string temp = "";
                while(st.top() != '['){
                    temp += st.top();
                    st.pop();
                }
                st.pop();
                reverse(temp.begin(), temp.end());
                string snum = "";
                while(!st.empty() && st.top() >= '0' && st.top() <= '9'){
                    snum += st.top();
                    st.pop();
                }
                reverse(snum.begin(), snum.end());
                int num = stoi(snum);
                for(int i = 0 ; i < num ; i++){
                    for(int j = 0 ; j < temp.size() ; j++){
                        st.push(temp[j]);
                    }
                }
            }else{
                st.push(s[i]);
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