class Solution {
    public String removeOuterParentheses(String s) {
        String res = "", temp = "";
        Stack<Character> st = new Stack<>();
        for(int i = 0 ; i < s.length() ; i++){
            char ch = s.charAt(i);
            if(ch == '('){
                st.push(ch);
                if(st.size() != 1){
                    temp += ch;
                }
            }        
            else{
                if(st.size() != 1){
                    temp += ch;
                }
                if(!st.isEmpty()){
                    st.pop();
                }
            }
            if(st.size() == 1){
                res += temp;
                temp = "";
            }
        }
        return res;
    }
}