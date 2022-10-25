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
            String s = br.readLine().trim();
            String[] S = s.split(" ");
            int n = Integer.parseInt(S[0]);
            Solution ob = new Solution();
            int ans = ob.isCircularPrime(n);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution
{
    public static boolean isPrime(int n)
    {
        if(n<=1){
            return false;
        }
        for(int i=2 ; i*i<=n ; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    public static int digits(int n){
        int cnt=0;
        while(n>0){
            cnt++;
            n/=10;
        }
        return cnt;
    }
    public int isCircularPrime(int n)
    {
        // code here
        if(isPrime(n)==false){  // if the number is not prime then no need to check anything
            return 0;
        }
        int dig = digits(n);    //number of digits
        int p = dig;    //store the digit count to raise the power of the last digit
        while(dig-->0)  //get numbers with digit count
        {
            int last_digit = n%10;  //get last digit 191 -> 1
            n /= 10;    // reduce the number by 10      191/10 -> 19
            n += last_digit*Math.pow(10, p-1);      //update number with last digit raise to power p  19+pow(10, p-1)
            if(isPrime(n)==false){
                return 0;
            }
        }
        return 1;
    }
}