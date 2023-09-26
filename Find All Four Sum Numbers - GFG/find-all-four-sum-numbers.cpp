//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        set<vector<int>> se;
        sort(arr.begin(), arr.end());
        for(int i = 0 ; i < arr.size() ; i++){
            for(int j = i+1 ; j < arr.size() ; j++){
                int a = j+1, b = arr.size()-1;
                while(a < arr.size() && b < arr.size() && a < b){
                    if(arr[i]+arr[j]+arr[a]+arr[b] == k){
                        se.insert({arr[i], arr[j], arr[a], arr[b]});
                        a++;
                        b--;
                    }else if(arr[i]+arr[j]+arr[a]+arr[b] > k){
                        b--;
                    }else{
                        a++;
                    }
                }
            }
        }
        return vector<vector<int>>(se.begin(), se.end());
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends