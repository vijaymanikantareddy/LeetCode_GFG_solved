//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int half = n/2;
    	int j = n-1;
    	for(int i = 0 ; i < half ; i++, j--){
    	    arr[j] = arr[i]*1e7 + arr[j];
    	}
    	int le = half, ri = n-1;
    	while(le < ri){
    	    long long temp = arr[le];
    	    arr[le] = arr[ri];
    	    arr[ri] = temp;
    	    le++;
    	    ri--;
    	}
    	long long N = 1e7;
    	j = 0;
        for(int i = 0 ; i < half ; i++){
            arr[j] = arr[i+half]%N;
            arr[j+1] = arr[i+half]/N;
            j += 2;
        }
    	 
    }
};

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends