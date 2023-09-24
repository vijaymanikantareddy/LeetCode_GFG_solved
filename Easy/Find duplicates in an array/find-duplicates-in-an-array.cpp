//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int, int>mp;
        vector<int> res;
        for(int i=0 ; i<n ;i++){
            mp[arr[i]]++;
        }
        for(auto it: mp){
            if(it.second>1){
                res.push_back(it.first);
            }
        }
        if(res.size()==0){
            return {-1};
        }
        else{ 
            sort(res.begin(), res.end());
            return res;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends