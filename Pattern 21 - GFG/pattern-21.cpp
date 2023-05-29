//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i == 0 || j == 0 || i == n-1 || j == n-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends