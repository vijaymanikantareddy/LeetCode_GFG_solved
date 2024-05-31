//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        vector<int> ar(8, 0);
        int it = 0;
        while(n > 0){
            if(n&1){
                ar[it] = 1;
            }
            it++;
            n >>= 1;
        }
        for(int i = 0 ; i < 4 ; i++){
            swap(ar[i], ar[i+4]);
        }
        int res = 0;
        for(int i = 0 ; i < 8 ; i++){
            if(ar[i] == 1){
                res += pow(2, i);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends