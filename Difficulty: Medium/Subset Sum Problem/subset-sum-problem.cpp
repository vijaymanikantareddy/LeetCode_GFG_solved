//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool fun(vector<int>& arr, int sum, int n, vector<vector<int>>& dp){
        if(sum == 0) return true;
        if(n < 0 || sum < 0) return false;
        if(dp[n][sum] != -1) return dp[n][sum];
        return dp[n][sum] = fun(arr, sum - arr[n], n - 1, dp) | fun(arr, sum, n - 1, dp);
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
        return fun(arr, sum, n-1, dp);
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
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends