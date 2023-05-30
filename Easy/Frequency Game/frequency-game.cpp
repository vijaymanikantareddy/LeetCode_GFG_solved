//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        map<int, int> mp;
        for(int i = 0 ; i < n ; i++){
            mp[arr[i]]++;
        }
        int minfre = INT_MAX;
        for(auto it: mp){
            minfre = it.second < minfre? it.second: minfre;
        }
        int res = INT_MIN;
        for(auto it: mp){
            if(it.second == minfre){
                res = res > it.first? res: it.first;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends