//{ Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;
class Main {
	public static void main (String[] args) {
	    
	    //taking input using Scanner class
		Scanner sc=new Scanner(System.in);
		
		//taking testcases
		int T=sc.nextInt();
		
		while(T-->0)
		{
		    Solution  obj=new Solution ();
		    int a,m;
		    
		      
            //taking input a and m
		    a=sc.nextInt();
		    m=sc.nextInt();
		    
		    
		  
            //calling function modInverse()
		    System.out.println(obj.modInverse(a,m));
		   
		    
		}
		
	}
}


// } Driver Code Ends


//User function Template for Java


class Solution
{
    
  public int modInverse(int a, int m)
    {
      //Your code here
      int res = 0, num = 1;
      while(num <= m){
          res = (num*a)%m;
          if(res == 1){
              return num;
          }
          num++;
      }
      return -1;
    }

}
