//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            String s; 
            s = br.readLine();
            
            Solution obj = new Solution();
            String res = obj.removePair(s);
            
            System.out.println(res);
            
        }
    }
}

// } Driver Code Ends


class Solution {
    public static String removePair(String s) {
        // code here
        Stack<Character> st = new Stack<>();
        int i = 0;
        while(i < s.length()){
            if(!st.isEmpty() && st.peek() == s.charAt(i)){
                st.pop();
            }
            else{
                st.push(s.charAt(i));
            }
            i++;
        }
        String res = "";
        while(!st.isEmpty()){
            res = st.peek()+res;
            st.pop();
        }
        if(res.equals("")){
            return "-1";
        }
        return res;
    }
}
        
