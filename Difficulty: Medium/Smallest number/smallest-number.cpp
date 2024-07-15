//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
        vector<int> v(d, 0);
        v[0] = 1;
        s--;
        if(s < 0) return "-1";
        int ind = d-1;
        while(s > 0){
            if(ind == -1) break;
            while(v[ind] < 9 && s > 0){
                v[ind]++;
                s--;
            }
            ind--;
        }
        if(s > 0) return "-1";
        string res = "";
        for(int i = 0 ; i < d ; i++){
            res += to_string(v[i]);
            long long t = stoll(res);
            if(t >= INT_MAX) return to_string(INT_MIN); 
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends