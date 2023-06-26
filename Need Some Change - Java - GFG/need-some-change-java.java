//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;


// } Driver Code Ends
//User function Template for Java

/*Geeks class with its member function swapElements
* a : array with input elements
* n : size of array
*/
class Geeks{
    static void swapElements(int a[], int n){
        
        // Your code here
        for(int i = 0 ; i < n-2 ; i++){
            int temp = a[i];
            a[i] = a[i+2];
            a[i+2] = temp;
        }
        for(int i = 0 ; i < n ; i++){
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }
}

//{ Driver Code Starts.

// Driver class
class GFG {
    
    // Driver code
	public static void main (String[] args) {
	    // Input using Scanner class
		Scanner sc = new Scanner(System.in);
		
		int testcase = sc.nextInt();
		
		while(testcase-- > 0){
		    int sizeof_array = sc.nextInt();
		    int a[] = new int[sizeof_array];
		    
		    for(int i = 0;i<sizeof_array;i++){
		        a[i] = sc.nextInt();
		    }
		    
		    Geeks obj = new Geeks();
		    obj.swapElements(a, sizeof_array);
		}
		
	}
}
// } Driver Code Ends