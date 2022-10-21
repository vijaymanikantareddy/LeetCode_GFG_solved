//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            long N;
            N = Long.parseLong(br.readLine().trim());
            
            Solution obj = new Solution();
            int res = obj.swapBitGame(N);
            
            System.out.println(res);
            
        }
    }
}



// } Driver Code Ends


//User function Template for Java

class Solution {
    public static int swapBitGame(long N) {
        // code here
        int setbits=0;
        while(N>0){
            setbits += N&1;
            N>>=1;
        }
        return setbits%2==0? 2: 1;
    }
}