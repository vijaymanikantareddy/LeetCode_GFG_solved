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
            String[] input = new String[2]; 
            input = br.readLine().split(" "); 
            int L = Integer.parseInt(input[0]); 
            int R = Integer.parseInt(input[1]); 
            Solution ob = new Solution();
            System.out.println(ob.primeSetBits(L,R));
        }
    }
}

// } Driver Code Ends


//User function Template for Java
class Solution
{
    public int setbits(int n){
        int cnt = 0;
        while(n>0){
            n &= (n-1);
            cnt++;
        }
        return cnt;
    }
    public int primeSetBits(int L, int R)
    {
        // code here
        boolean primes[] = new boolean[1001];
        Arrays.fill(primes, true);
        primes[0] = primes[1] = false;
        for(int i = 2 ; i*i <= 1000 ; i++){
            if(primes[i]){
                for(int j = i*i ; j <= 1000 ; j+=i){
                    primes[j] = false;
                }
            }
        }
        int cnt = 0;
        for(int i = L ; i <= R ; i++){
            if(primes[setbits(i)]){
                cnt++;
            }
        }
        return cnt;
    }
}