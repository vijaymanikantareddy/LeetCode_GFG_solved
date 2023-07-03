//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        vector<int> mn(n, 0), mx(n, 0);
        mn[0] = arr[0]; //minimum
        mx[n-1] = arr[n-1];
        for(int i = 1 ; i < n ; i++){
            mn[i] = min(mn[i-1], arr[i]);
            mx[n-1-i] = max(mx[n-i], arr[n-1-i]);
        }
        int i = 0, j = 0, ans = 0;
        while(i < n && j < n){
            if(mn[i] <= mx[j]){
                ans = max(ans, j-i);
                j++;
            }else{
                i++;
            }
        }
        return ans;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends