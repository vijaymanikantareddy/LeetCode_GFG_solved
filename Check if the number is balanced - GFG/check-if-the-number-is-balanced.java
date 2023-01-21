//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main (String[] args)
    {
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            String N = sc.next ();

            if (new Sol().balancedNumber (N))
    		    System.out.println (1);
    		else
    		    System.out.println (0);
        }
        
    }
}
// } Driver Code Ends


//User function Template for Java

class Sol
{
    Boolean balancedNumber(String N)
    {
        // your code here 
        long l = 0, r = 0;
        int i = 0;
        while(i < N.length()/2){
            char ch = N.charAt(i);
            l += ch-'0';
            i++;
        }
        i++;
        while(i < N.length()){
            char ch = N.charAt(i);
            r += ch-'0';
            i++;
        }
        return l==r;
    }
}