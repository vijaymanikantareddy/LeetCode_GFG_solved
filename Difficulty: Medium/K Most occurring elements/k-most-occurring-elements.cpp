//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Function to print the k numbers with most occurrences

class Solution {
  public:
    // Function to return the sum of frequencies of k numbers
    // with most occurrences in an array.
    int kMostFrequent(vector<int>& arr, int k) {
        // Your code here
        unordered_map<int, int> mp;
        for(auto it: arr){
            mp[it]++;
        }
        int res = 0;
        priority_queue<pair<int, int>> pq;
        for(auto it: mp){
            pq.push({it.second, it.first});
        }
        for(int i = 0 ; i < k ; i++){
            auto t = pq.top();
            pq.pop();
            res += t.first;
        }
        return res;
    }
};


//{ Driver Code Starts.
//   Driver program to test above
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string str, line;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr, arr2;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        getline(cin, line);
        stringstream ss1(line);
        while (ss1 >> num) {
            arr2.push_back(num);
        }
        int k = arr2[0];
        Solution ob;
        cout << ob.kMostFrequent(arr, k) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends