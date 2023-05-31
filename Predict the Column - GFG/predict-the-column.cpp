//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        for(int i = 0 ; i < N ; i++){
            for(int j = 1 ; j < N ; j++){
                arr[0][i]+=arr[j][i];
            }
        }
        // for(int i = 0 ; i<N ; i++){
        //     cout<<arr[0][i]<<" ";
        // }
        // cout<<"\n";
        int cnt = INT_MAX, res =-1;
        for(int i = 0 ; i < N ; i++){
            if(cnt > arr[0][i]){
                res = i;
                cnt = arr[0][i];
            }
        }
        return res;
        
    }
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    vector<vector<int>>arr(N,vector<int>(N));
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            int x;
	            cin >> x; 
	            arr[i][j]=x;
	        }
	    }
	    Solution ob;
	    cout << ob.columnWithMaxZeros(arr,N) << endl;
	}
	
	return 0;
}
// } Driver Code Ends