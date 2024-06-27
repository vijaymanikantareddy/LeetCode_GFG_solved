//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        int res = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == 'P'){
                int st = (i-k < 0)? 0: i-k;
                int end = (i+k >= n)? n-1: i+k;
                for(int j = st ; j <= end ; j++){
                    if(arr[j] == 'T'){
                        arr[i] = 'C';
                        arr[j] = 'C';
                        res++;
                        break;
                    }
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	}
	return 0; 
} 


// } Driver Code Ends