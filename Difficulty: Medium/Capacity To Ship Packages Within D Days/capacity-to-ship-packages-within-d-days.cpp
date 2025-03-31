//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    bool fun(int arr[], int n, int d, int val){
        int s = 0, cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(s + arr[i] > val){
                cnt++;
                s = arr[i];
            }else{
                s += arr[i];
            }
        }
        if(s > 0){
            cnt++;
        }
        return (cnt <= d);
    }
    int leastWeightCapacity(int arr[], int n, int d) {
        // code here
        int low = 0, high = 0;
        for(int i = 0 ; i < n ; i++){
            low = max(low, arr[i]);
            high += arr[i];
        }
        while(low <= high){
            int mid = low + (high - low)/2;
            if(fun(arr, n, d, mid)){
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
        int N, D;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        cin >> D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr, N, D) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends