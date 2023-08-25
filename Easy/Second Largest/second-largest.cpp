//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int a = arr[0], b = arr[1];
	    if(a < b){
	        swap(a, b);
	    }
	    for(int i = 2 ; i < n ; i++){
	        if(arr[i] > a){
	            b = a;
	            a = arr[i];
	        }else if(arr[i] > b && arr[i] != a){
	            b = arr[i];
	        }else if(a == b && arr[i] < b){
	            b = arr[i];
	        }
	    }
	    return (a == b)? -1: b;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends