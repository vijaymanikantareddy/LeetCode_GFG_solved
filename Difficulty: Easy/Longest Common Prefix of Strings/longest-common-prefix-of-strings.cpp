//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string res = "";
        int l = INT_MAX;
        for(auto it: arr) l = min(l, (int)it.size());
        bool flag = false;
        for(int i = 0 ; i < l ; i++){
            if(flag) break;
            for(int j = 1 ; j < arr.size() ; j++){
                if(arr[j][i] != arr[0][i]){
                    flag = true;
                    break;
                }
            }
            if(!flag) res += arr[0][i];
        }
        return (res.empty())? "-1": res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends