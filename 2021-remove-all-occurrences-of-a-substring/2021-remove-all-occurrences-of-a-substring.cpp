class Solution {
public:
    bool fun(stack<char> st, string part){
        stack<char> temp = st;
        int i = part.size()-1;
        while(i >= 0){
            if(temp.top() != part[i]){
                return false;
            }
            temp.pop();
            i--;
        }
        return true;
    }
    string removeOccurrences(string s, string part) {
        stack<char> st;
        for(int i = 0 ; i < s.size() ; i++){
            st.push(s[i]);
            if(st.size() >= part.size() && s[i] == part.back()){
                if(fun(st, part)){
                    int j = 0;
                    while(j < part.size()){
                        st.pop();
                        j++;
                    }
                }
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