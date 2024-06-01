//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
        map<char, int> mp;
        for(auto ch: s) mp[ch]++;
        int x = 0, y = 0;
        for(auto it: mp){
            int di = it.first - 'a' + 1;
            if(di%2 == 1 && it.second%2 == 1){
                x++;
            }else if(di%2 != 1 && it.second%2 != 1){
                y++;
            }
        }
        // cout << x << " " << y << endl;
        return (x+y)%2 == 0? "EVEN":"ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends