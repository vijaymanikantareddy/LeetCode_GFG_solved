//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int Count(int l, int r) {
        // Code here
        vector<int> v(r+1, 1);
        v[0] = v[1] = 0;
        for(int i = 2 ; i*i <= r ; i++){
            for(int j = i*i ; j <= r ; j += i){
                if(v[j]){
                    v[j] = 0;
                }
            }
        }
        int pr = 0, npr = 0;
        for(int i = l ; i <= r ; i++){
            if(v[i]) pr++;
            else npr++;
        }
        return abs(npr - pr);
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int L, R;
        cin >> L >> R;
        Solution obj;
        int ans = obj.Count(L, R);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends