//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        int res = 0;
        for(int i = 0 ; i < 32 ; i++){
            int cnt = 0;
            for(int j = 0 ; j < N ; j++){
                if(((1<<i)&arr[j])){
                    cnt++;
                }
                cnt = cnt%3;
            }
            if(cnt){
                res += (1<<i);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends