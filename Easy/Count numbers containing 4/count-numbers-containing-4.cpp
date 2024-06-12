//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int fun(int n){
        int cnt = 0;
        while(n > 0){
            if(n%10 == 4){
                cnt++;
                return 1;
            }
            n /= 10;
        }
        return (cnt>0);
    }
    int countNumberswith4(int n) {
        // code here
        int res = 0;
        for(int i = 4 ; i <= n; i++){
            res += fun(i);
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends