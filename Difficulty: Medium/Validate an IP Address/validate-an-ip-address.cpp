//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    bool fun(string s){
        if (s.length() == 0) {
            return false;
        }
        for (char i : s) {
            if (i < '0' || i > '9') {
                return false;
            }
        }
        return true;
    }
    int isValid(string str) {
        // code here
        vector<string> arr;
        stringstream ss(str);
        string t;
        while (getline(ss, t, '.')) {
            arr.push_back(t);
        }
        if (arr.size() != 4) {
            return 0;
        }
        for (auto it : arr) {
            if (fun(it) == 0 || stoi(it) < 0 || stoi(it) > 255
            || it != to_string(stoi(it))) {
                return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends