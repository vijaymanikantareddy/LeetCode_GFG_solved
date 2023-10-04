//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        int num=0;
        for(int i=0 ; i<s.size() ; i++){
            switch(s[i]){
                case 'I':
                    if(s[i+1]=='V' or s[i+1]=='X')
                        num--;
                    else
                        num++;
                    break;
                case 'V':
                    num+=5;
                    break;
                case 'X':
                    if(s[i+1]=='L' or s[i+1]=='C')
                        num-=10;
                    else
                        num+=10;
                    break;
                case 'L':
                    num+=50;
                    break;
                case 'C':
                    if(s[i+1]=='D' or s[i+1]=='M')
                        num-=100;
                    else
                        num+=100;
                    break;
                case 'D':
                    num+=500;
                    break;
                case 'M':
                    num+=1000;
                    break;
            }
        }
        return num;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends