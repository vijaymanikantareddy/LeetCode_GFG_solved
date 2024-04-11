class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for(char ch: num){
            // remove the peak elements
            while(!st.empty() && st.top()>ch && k > 0){
                st.pop();
                k--;
            }
            if(!st.empty() || ch != '0'){
                st.push(ch);
            }
        }
        //remove the largest values from the top of the stack
        while(!st.empty() && k--){
            st.pop();
        }
        
        if(st.empty()) return "0";
        string res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
};