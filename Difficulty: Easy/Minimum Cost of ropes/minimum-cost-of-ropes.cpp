//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here
        long long res = 0;
        priority_queue<long long, vector<long long>, greater<>> pq;
        for(auto it: arr) pq.push(it);
        while(pq.size() > 1){
            long long a = pq.top();
            pq.pop();
            long long b = 0;
            if(!pq.empty()){
                b = pq.top();
                pq.pop();
            }
            res += (a + b);
            pq.push(a + b);
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends