//{ Driver Code Starts
// Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

// Position this line where user code will be pasted.

class GFG {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();

            Solution ob = new Solution();
            ob.printDiamond(n);
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {

    void printDiamond(int n) {
        // Your code here
        int sp = n-1;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= sp ; j++){
                System.out.print(" ");
            }
            for(int j = 1 ; j <= i ; j++){
                System.out.print("* ");
            }
            sp--;
            System.out.println();
        }
        sp = 0;
        int end = n;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= sp ; j++){
                System.out.print(" ");
            }
            for(int j = 1 ; j <= end ; j++){
                System.out.print("* ");
            }
            end--;
            System.out.println();
            sp++;
        }
    }
}
