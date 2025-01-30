//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());

            Solution ob = new Solution();
            System.out.println(ob.findPosition(N));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    static int findPosition(int n) {
        // code here
        if(n <= 0 || (n&(n-1)) != 0) return -1;
        int res = 1;
        while(n > 0){
            if((n&1) == 1){
                return res;
            }
            res++;
            n >>= 1;
        }
        return res;
    }
};