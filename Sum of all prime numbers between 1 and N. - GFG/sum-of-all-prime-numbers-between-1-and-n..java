//{ Driver Code Starts

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
            Solution ob = new Solution();
            long ans = ob.prime_Sum(n);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends



class Solution
{
    public long prime_Sum(int n)
    {
        // code here
        int prime[] = new int[n+1];
        Arrays.fill(prime, 1);
        prime[0] = prime[1] = 0;
        for(int i = 2 ; i * i <= n ; i++)
        {
            if(prime[i] == 1)
            {
                for(int j = i * i ; j <= n ; j += i)
                {
                    prime[j] =  0;
                }
            }
        }
        long res = 0;
        for(int i = 2 ; i <= n ; i++)
        {
            if(prime[i] == 1)
            {
                // System.out.print(i+" ");
                res += i;
            }
        }
        // System.out.println();
        
        return res;
    }
}