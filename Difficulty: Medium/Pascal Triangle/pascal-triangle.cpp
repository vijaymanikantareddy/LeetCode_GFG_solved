//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<int>> v;
        v.push_back({1});
        v.push_back({1, 1});
        if(n <= 2) return v[n - 1];
        for(int i = 2 ; i <= n ; i++){
            vector<int> temp;
            temp.push_back(1);
            for(int j = 1 ; j < v.back().size() ; j++){
                temp.push_back(v[i - 1][j - 1] + v[i - 1][j]);
            }
            temp.push_back(1);
            v.push_back(temp);
            
        }
        return v[n - 1];
    }
};



//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends