//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long fun(vector<int> a){
        return (long long) a[1]* (long long)a[1] + 
        (long long) a[0]* (long long)a[0];
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Your code here
        vector<vector<int>> res;
        vector<pair<long long, vector<int>>> vc;
        for(int i = 0 ; i < points.size() ; i++){
            vc.push_back({ fun(points[i]), points[i] });
        }
        sort(vc.begin(), vc.end());
        for(int i = 0 ; i < k ; i++){
            res.push_back(vc[i].second);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());
        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends