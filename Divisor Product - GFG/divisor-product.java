//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            Long N = Long.parseLong(read.readLine());

            Solution ob = new Solution();
            System.out.println(ob.divisorProduct(N));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    static Long divisorProduct(Long N) {
        // code here
        Long res = N;
        Long mod = 1000000007l;
        for(long i = 2 ; i*i <= N ; i++){
            if(N%i == 0){
                res = res * i * (N/i);
                res = res%mod;
            }
        }
        return res%mod;
    }
};