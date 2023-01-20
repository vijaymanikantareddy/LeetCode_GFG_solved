//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Main {
    // Driver code
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            Solution obj=new Solution();
            obj.printTriangle(n);
        }
    }
}
// } Driver Code Ends


class Solution {

    void printTriangle(int n) {
        // code here
        int spaces = 0;
        int stars = (2*n)-1;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < spaces ; j++){
                System.out.print(" ");
            }
            spaces++;
            for(int j = 0 ; j < stars ; j++){
                System.out.print("*");
            }
            stars-=2;
            System.out.println();
        }
    }
}