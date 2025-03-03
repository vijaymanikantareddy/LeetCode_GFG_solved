//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the kth smallest element in the array.
    int kthSmallest(vector<int>& arr, int k) {
        // Your code here
        priority_queue<int> pq;
        for(auto it: arr){
            if(pq.size() > k) pq.pop();
            pq.push(it);
        }
        if(pq.size() > k) pq.pop();
        return pq.top();
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t; // Number of test cases
    cin.ignore();
    while (t--) {
        // Read the array
        vector<int> arr, arr2;
        string line, line2;
        getline(cin, line);
        stringstream ss(line);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int k = arr[0];
        getline(cin, line2);
        stringstream ss2(line2);
        while (ss2 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthSmallest(arr2, k) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends