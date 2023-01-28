//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
	public static void main(String[] args) throws IOException
	{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            Long n = Long.parseLong(br.readLine().trim());
            Solution ob = new Solution();
            String ans = ob.is_power_of_eight(n);
            System.out.println(ans);
        }
	}
}

// } Driver Code Ends


//User function Template for Java

class Solution
{
    public String is_power_of_eight(Long n)
    {
        // Code here
        if((n>0l) && ((n&n-1)==0l) && ((n-1)%7 == 0l)){
            return "Yes";
        }
        return "No";
    }
}
