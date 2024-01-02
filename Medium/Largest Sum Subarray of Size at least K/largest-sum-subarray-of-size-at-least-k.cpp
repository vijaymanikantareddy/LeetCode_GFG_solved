//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long int cur = a[0];
        vector<long long int> maxarr(n);
        maxarr[0] = cur;
        //kadane's algorithm for maximum sum till that index
        for(long long int i = 1 ; i < n ; i++){
            cur = max(a[i], cur+a[i]);
            maxarr[i] = cur;
        }
        
        //first ksize subarray sum
        long long int sum = 0;
        for(int i = 0 ; i < k ; i++){
            sum += a[i];
        }
        
        long long ans = sum;
        for(int i = k ; i < n ; i++){
            //maintain k size subarray sum
            //remove first element and add current element
            sum = sum + a[i] - a[i-k];
            //find maximum sum in k-size subarray
            //max among ans, ksize subarray and (ksize subarray + we removed an element, 
            //if the sum upto that index is positive then we can use that sum to extend ksize window)
            ans = max({ans, sum, sum + maxarr[i-k]});
        }
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends