//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int a = arr[1] - arr[0], b = arr[2] - arr[1];
        int diff = min(a, b);
        if(arr.size() <= 2) return arr.back() + a;
        for(int i = 0 ; i < arr.size() - 1 ; i++){
            if(arr[i] + diff != arr[i + 1]){
                return arr[i] + diff;
            }
        }
        return arr.back() + diff;
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

        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.findMissing(arr) << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends