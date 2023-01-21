//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Main {
    // Driver code
    public static void main(String[] args) throws Exception {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            Solution obj = new Solution();
            obj.printTriangle(n);
        }
    }
}
// } Driver Code Ends


class Solution {

    void printTriangle(int n) {
        // code here
        for(int i = 0 ; i < n ; i++){
            char ch = (char)(65+n);
            for(int j = 0 ; j <= i ; j++){
                ch = (char)(65+n-j-1);
                System.out.print(ch+" ");
                
            }
            System.out.println();
        }
    }
}