//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
    int fun(int n, vector<int>& wt, vector<int>& val, int w){
        if(n < 0) return 0;
        int pick = 0, nonpick = 0;
        if(w - wt[n] >= 0){
            pick = val[n] + fun(n-1, wt, val, w - wt[n]);
        }
        nonpick = fun(n-1, wt, val, w);
        return max(pick, nonpick);
    }
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
        return fun(val.size()-1, wt, val, W);
    }
};

//{ Driver Code Starts.

int main() {
    // taking total testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // reading number of elements and weight
        int n, w;
        vector<int> arr, val, wt, drr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            val.push_back(number);
        }

        w = arr[0];
        n = val.size();
        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            wt.push_back(number);
        }
        Solution ob;
        cout << ob.knapSack(w, wt, val) << endl;
    }
    return 0;
}
// } Driver Code Ends