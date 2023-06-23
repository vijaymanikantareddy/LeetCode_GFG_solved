//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
        map<int,int>mp;
        int mx = 0;
        for(int i=0;i<N;i++){
            mp[tasks[i]]++;
            mx = max(mx, mp[tasks[i]]);
        }
        int c=0;
        for(auto it:mp){
            if(it.second == mx){
                c += 1;
            }
        }
        int k1 = (mx-1)*(K+1);
        return max(N, c+k1);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends