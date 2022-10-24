//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            int N = Integer.parseInt(in.readLine());
            
            Solution ob = new Solution();
            List<Integer> numbers= new ArrayList<Integer>();
            numbers = ob.minPartition(N);
            for(int i: numbers){
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution{
    static List<Integer> minPartition(int N)
    {
        // code here
        // place the prices in an array
        int prices[] = new int[]{1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        
        // last index in prices array
        int iter = 9;
        
        // List to return from function
        List<Integer> li = new ArrayList<Integer>();
        
        // iterate until N greater than 0
        while(N>0)
        {
            if(prices[iter]<=N){    //if N greater than or equal to prices[iter]
                li.add(prices[iter]);   //push that price to result
                N -= prices[iter];  //and reduce prices[iter] from N and N will be updated
            }
            else{
                iter--;     // if the prices[iter] is greater than N then reduce the iterator
            }
            if(iter==0){
            	li.add(prices[iter]);   //if prices[iter]==1 then add 1 to result and make N as 0
            	N = 0;
            }
        }
        return li;  //return result;
    }
}