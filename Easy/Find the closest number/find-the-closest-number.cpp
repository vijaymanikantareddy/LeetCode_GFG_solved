//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int l = 0, r = n-1;
        while(l < r){
            int mid = (l+r)/2;
            if(arr[mid] < k){
                l = mid+1;
            }else{
                r = mid;
            }
        }
        if(abs(arr[l-1] - k) < abs(arr[l] - k)){
            return arr[l-1];
        }
        return arr[l];
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends