//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//Back-end complete function Template for C++

class Solution {
  public:
    int fun(vector<int>& cost, vector<int>& dp, int i){
        if(i >= cost.size()) return 0;
        if(dp[i] != -1) return dp[i];
        int onestep = cost[i] + fun(cost, dp, i + 1);
        int twosteps = cost[i] + fun(cost, dp, i + 2);
        return dp[i] = min(onestep, twosteps);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n = cost.size();
        vector<int> dp(n, -1);
        int a = dp[0] = fun(cost, dp, 0);
        dp.clear();
        if(n <= 1) return a;
        int b = dp[1] = fun(cost, dp, 1);
        return min(a, b);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution sln;
        int res = sln.minCostClimbingStairs(arr);
        cout << res << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends