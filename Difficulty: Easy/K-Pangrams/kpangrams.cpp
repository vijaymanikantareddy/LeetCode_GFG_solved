//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        map<char, int> mp;
        for(auto it: str) mp[it]++;
        if(str.size() - mp[' '] < 26) return false;
        for(char ch = 'a' ; ch <= 'z' ; ch++){
            if(mp.find(ch) == mp.end()){
                k--;
                mp[ch]++;
            }
        }
        return (k >= 0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends