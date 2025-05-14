//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string countAndSay(int n) {
        // code here
        if(n == 1) return "1";
        string number = "1";
        for(int i = 2 ; i <= n ; i++){
            string res;
            int cnt = 1;
            char curr = number[0];
            for(int j = 1 ; j < number.size() ; j++){
                if(number[j] == curr){
                    cnt++;
                }else{
                    res += to_string(cnt) + curr;
                    curr = number[j];
                    cnt = 1;
                }
            }
            res += to_string(cnt) + curr;
            number = res;
        }
        return number;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.countAndSay(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends