//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int getSingle(vector<int> &arr) {
        // code here
        int N = arr.size();
        int res = 0;
        for(int i = 0 ; i < 32 ; i++){
            int cnt = 0;
            for(int j = 0 ; j < N ; j++){
                if(((1<<i)&arr[j])){
                    cnt++;
                }
                cnt = cnt%3;
            }
            if(cnt){
                res += (1<<i);
            }
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSingle(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends