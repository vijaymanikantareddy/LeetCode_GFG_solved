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
            int n = Integer.parseInt(br.readLine().trim());
            Solution obj = new Solution();
            obj.printTable(n);
        }
    }
}


// } Driver Code Ends


//User function Template for Java

class Solution{
    public void printTable(int n){
        int cnt = 10;
        while(cnt > 0){
            // Code here 
            System.out.print(cnt*n+" ");
            cnt--;
        }
        System.out.println();
    }
}