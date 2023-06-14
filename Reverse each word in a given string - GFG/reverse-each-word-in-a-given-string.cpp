//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        int i = 0, j = 0;
        while(i < s.size()){
            if(s[i] == '.'){
                int a = j, b = i-1;
                while(a < b){
                    char temp = s[a];
                    s[a] = s[b];
                    s[b] = temp;
                    a++;b--;
                }
                j = i+1;
            }
            i++;
        }
        int a = j, b = i-1;
        while(a < b){
            char temp = s[a];
            s[a] = s[b];
            s[b] = temp;
            a++;b--;
        }
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends