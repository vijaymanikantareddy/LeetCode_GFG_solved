//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        long long res = 0;
        int n = arr.size();
        vector<int> leftmax(n);
        vector<int> rightmax(n);
        int mx = 0;
        for(int i = 0 ; i < n ; i++){
            mx = mx > arr[i]? mx: arr[i];
            leftmax[i] = mx;
        }
        
        mx = 0;
        for(int i = n-1 ; i >= 0 ; i--){
            mx = mx > arr[i]? mx : arr[i];
            rightmax[i] = mx;
        }
        
        for(int i = 0 ; i < n ; i++){
            res += (min(rightmax[i], leftmax[i]) - arr[i]);
        }
        
        return res;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends