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
            System.out.println(ob.largestPrimeFactor(N));
        }
    }
}
// } Driver Code Ends


//User function Template for Java
class Solution{
    static long largestPrimeFactor(int N) {
        // code here
        int [] primes = new int[N+1];
        Arrays.fill(primes, 1);
        primes[0] = primes[1] = 0;
        for(int i = 2 ; i*i <= N ; i++){
            if(primes[i]==1){
                for(int j=i*i ; j<=N ; j+=i){
                    primes[j] = 0;
                }
            }
        }
        if(primes[N] == 1){
            return (long)N;
        }
        int i = N/2; 
        while(i>=2){
            if(N%i==0 && primes[i]==1){
                return (long)i;
            }
            i--;
        }
        return 2;
    }
}