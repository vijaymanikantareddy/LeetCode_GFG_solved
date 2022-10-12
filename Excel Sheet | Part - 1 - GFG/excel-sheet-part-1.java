//{ Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {
    public static void main (String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	        
	    int t=Integer.parseInt(br.readLine());
    
	    while(t > 0){
	        int n = Integer.parseInt(br.readLine());
	        Solution T = new Solution();
	        
	        System.out.println(T.excelColumn(n));
	        
            t--;
	    }
	}
    
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    public String excelColumn(int N){
        
        //  Your code here
        String res = "";
        while(N>0)
        {
            int d = N%26;
            if(d==0){
                res = 'Z'+ res;
                N = N/26 - 1;
            }
            else{
                res = (char)(64+d) + res;
                N = N/26;
            }
        }
        return res;
        
    }
}