//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        if(start == end) return 0;
        vector<int> vis(1e5+1, 0);
        int mod = 1e5;
        queue<pair<int, int>> q;
        q.push({0, start});
        vis[start] = 1;
        while(!q.empty()){
            int steps = q.front().first;
            int num = q.front().second;
            q.pop();
            if(num == end) return steps;
            for(auto it: arr){
                long long a = (long long)it* (long long)num;
                a = a%mod;
                if(!vis[a]){
                    vis[a] = 1;
                    q.push({steps+1, a});
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends