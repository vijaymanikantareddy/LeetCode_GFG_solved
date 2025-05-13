//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int fun(vector<int>& dp, int ind, vector<int>& heights, int n){
        if(ind >= n - 1) return 0;
        if(dp[ind] != -1) return dp[ind];
        int onestep = 1e5, twosteps = 1e5;
        if(ind + 1 < n) {
            onestep = abs(heights[ind] - heights[ind + 1]) + 
                fun(dp, ind + 1, heights, n);
        }
        if(ind + 2 < n) {
            twosteps = abs(heights[ind] - heights[ind + 2]) + 
                fun(dp, ind + 2, heights, n);
        }
        return dp[ind] = min(onestep, twosteps);
    }
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        vector<int> dp(n, -1);
        dp[0] = fun(dp, 0, height, n);
        // for(auto it: dp) cout << it << " ";
        return dp[0];
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends