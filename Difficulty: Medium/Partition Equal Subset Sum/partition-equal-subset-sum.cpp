//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool fun(vector<vector<int>>& dp, int n, vector<int>& arr, int sum){
        if(sum == 0) return true;
        if(n < 0 || sum < 0) return false;
        if(dp[n][sum] != -1) return dp[n][sum];
        return dp[n][sum] = 
            fun(dp, n - 1, arr, sum - arr[n]) 
                | fun(dp, n - 1, arr, sum);
    }
    bool equalPartition(vector<int>& arr) {
        // code here
        int n = arr.size();
        int s = 0;
        for(auto it: arr) s += it;
        if(s%2 != 0) return false;
        vector<vector<int>> dp(n, vector<int>(s/2 + 1, -1));
        return fun(dp, n - 1, arr, s/2);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends