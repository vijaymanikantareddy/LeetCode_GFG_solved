//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            int N = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.nextHappy(N));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{

    static int fun(int n){
        int sum = 0;
        while(n>0){
            int d = n%10;
            sum += d*d;
            n/=10;
        }
        if(sum <= 9){
            return sum;
        }
        else return fun(sum);
    }
    
    static int nextHappy(int N){
        // code here
        int t = N+1;
        while(fun(t) != 1 && fun(t) != 7){
            t++;
        }
        return t;
    }
}