//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int cnt = 1;
        map<int, int> mp;
        for(int i = 0 ; i < arr.size() ; i++){
              mp[arr[i]]++;
          }
          int mx = 1;
          for(auto it: mp){
              if(mp.find(it.first+1) != mp.end()){
                  cnt++;
              }else{
                  cnt = 1;
              } 
              mx = max(cnt, mx);
          }
          return mx;
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
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends