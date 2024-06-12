class Solution {
public:
    int clumsy(int n) {
        stack<long long> st;
        int it = 0;
        st.push(n);
        for(int i = n-1 ; i >= 1; i--){
            if(it%4 == 0){
                st.top() *= i;
            }else if(it%4 == 1){
                st.top() /= i;
            }else if(it%4 == 2){
                st.push(i);
            }else{
                st.push(-i);
            }
            it++;
        }
        int res = 0;
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        return res;
    }
};