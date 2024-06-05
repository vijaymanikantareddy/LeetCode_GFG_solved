//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        sort(a, a+n);
        sort(b, b+m);
        int i = 0, j = 0;
        long long s1 = 0, s2 = 0;
        for(int i = 0 ; i < n ; i++) s1 += a[i];
        for(int i = 0 ; i < m ; i++) s2 += b[i];
        while(i < n && j < m){
            long long v1 = s1 - a[i] + b[j];
            long long v2 = s2 - b[j] + a[i];
            if(v1 == v2) return 1;
            if(v1 > v2){
                i++;
            }else{
                j++;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends