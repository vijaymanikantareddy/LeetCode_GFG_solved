//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        map<int, int> mp;
        int mx = arr[0];
        vector<int> res;
        for(int i = 0 ; i < k ; i++){
            mx = max(arr[i], mx);
            mp[arr[i]]++;
        }
        res.push_back(mx);
        for(int i = k ; i < n ; ++i){
            mp[arr[i - k]]--;
            if(mp[arr[i - k]] == 0) mp.erase(arr[i - k]);
            mp[arr[i]]++;
            auto it = mp.end();
            --it;
            res.push_back(it->first);
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}
// } Driver Code Ends