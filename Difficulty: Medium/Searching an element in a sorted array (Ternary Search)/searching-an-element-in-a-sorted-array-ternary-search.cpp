//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int ternarySearch(int arr[], int N, int K) 
    { 
       // Your code here
       int st = 0, en = N-1;
       while(st <= en){
           int mid1 = st + (en - st)/2;
           int mid2 = en - (en - st)/2;
           if(arr[mid1] == K) return 1;
           if(arr[mid2] == K) return 1;
           if(arr[mid1] < K){
               st = mid1+1;
           }
           if(arr[mid2] < K){
               st = mid2+1;
           }
           if(arr[mid1] > K) en = mid1-1;
           if(arr[mid2] > K) en = mid2-1;
       }
       return -1;
    }
};

//{ Driver Code Starts.
int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int N, K;
        cin >> N >> K;
        
        int arr[N];
        
        for(int i = 0;i<N;i++){
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.ternarySearch(arr, N, K) << endl;

    }

	return 0; 
} 

// } Driver Code Ends