class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]!='#'){
                st.push(s[i]);
            }
            else{
                if(!st.empty())
                    st.pop();
            }
        }
        string res="";
        while(!st.empty()){
           res = st.top()+ res;
           st.pop();
        }
        stack<char> sta;
        for(int i=0 ; i<t.size() ; i++)
        {
            if(t[i]!='#'){
                sta.push(t[i]);
            }
            else{
                if(!sta.empty())
                    sta.pop();
            }
        }
        string fin="";
        while(!sta.empty()){
           fin = sta.top()+ fin;
           sta.pop();
        }
        cout<<res<<" "<<fin;
        return res==fin;
    }
};