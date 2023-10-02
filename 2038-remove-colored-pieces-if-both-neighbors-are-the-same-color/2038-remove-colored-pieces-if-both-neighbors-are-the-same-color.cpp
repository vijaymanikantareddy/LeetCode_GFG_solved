class Solution {
public:
    bool winnerOfGame(string colors) {
        int a = 0, b = 0;
        stack<char> st;
        st.push(colors[0]);
        for(int i = 1 ; i < colors.size()-1 ; i++){
            if(!st.empty() && st.top() == colors[i] &&
              colors[i] == colors[i+1]){
                if(colors[i] == 'A') a++;
                else b++;
            }else{
                st.push(colors[i]);
            }
        }
        return a > b;
    }
};