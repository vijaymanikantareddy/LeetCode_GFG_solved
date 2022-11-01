//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int N=sc.nextInt();
			
            Solution ob = new Solution();
            ArrayList<Integer> primes  = ob.sieveOfEratosthenes(N);
            for(int prime : primes) {
                System.out.print(prime+" ");
            }
            System.out.println();
        }
    }
}

// } Driver Code Ends


//User function Template for Java
class Solution{
    static ArrayList<Integer> sieveOfEratosthenes(int N){
        // code here
        boolean prime[] = new boolean[N+1];
        Arrays.fill(prime, true);
        prime[0] = prime[1] = false;
        for(int i = 2 ; i <= N ; i++)
        {
            if(prime[i])
            {
                for(int j = i * i ; j <= N ; j += i)
                {
                    prime[j] =  false;
                }
            }
        }
        ArrayList<Integer> al = new ArrayList<>();
        for(int i = 2 ; i <= N ; i++)
        {
            if(prime[i])
            {
                al.add(i);
            }
        }
        return al;
    }
}