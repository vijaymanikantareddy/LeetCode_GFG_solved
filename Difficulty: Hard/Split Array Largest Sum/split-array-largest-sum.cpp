//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int fun(int arr[], int givenTime, int n){
        int t = 0, cnt = 1;
        for(int i = 0 ; i < n ; i++){
            if(t + arr[i] <= givenTime){
                t += arr[i];
            }else{
                cnt++;
                t = arr[i];
            }
        }
        return cnt;
    }
    
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int low = 0, high = 0;
        for(int i = 0 ; i < N ; i++) {
            low = max(low, arr[i]);
            high += arr[i];
        }
        while(low <= high){
            int mid = low + (high - low)/2;
            if(fun(arr, mid, N) <= K){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends