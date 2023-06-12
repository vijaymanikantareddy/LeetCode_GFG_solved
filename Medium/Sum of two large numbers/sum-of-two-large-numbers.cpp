//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        string res = "";
        int c = 0, s = 0;
        int i = X.size()-1, j = Y.size()-1;
        while((i >= 0 && j >= 0)){
            int a = X[i--]-'0';
            int b = Y[j--]-'0';
            s = (a+b+c)%10;
            c = (a+b+c)/10;
            char ch = (s+'0');
            res.push_back(ch);
        }
        
        while(i >= 0){
            int a = X[i--]-'0';
            s = (a+c)%10;
            c = (a+c)/10;
            char ch = (s+'0');
            res.push_back(ch);
        }
        while(j >= 0){
            int a = Y[j--]-'0';
            s = (a+c)%10;
            c = (a+c)/10;
            char ch = (s+'0');
            res.push_back(ch);
        }
        if(c){
            res.push_back('1');
        }
        reverse(res.begin(), res.end());
        i = 0;
        bool flag = false;
        while(res[i] == '0'){
            i++;
            flag = true;
        }
        if(flag){
            if(i == res.size()){
                res.erase(0, i-1);
            }else{
                res.erase(0, i);
            }
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
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends