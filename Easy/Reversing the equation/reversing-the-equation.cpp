//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string rev(string s){
        int i = 0 , j = s.size()-1;
        while(i < j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        return s;
    }
    bool isnum(char ch){
        return (ch >= '0' && ch <= '9');
    }
    string reverseEqn (string s)
    {
        //code here.
        string res = "";
        string temp = "";
        int j = 0;
        for(int i = 0 ; i < s.size() ; ){
            temp = s[i];
            if(isnum(s[i])){
                for(j = i+1 ; j < s.size() && isnum(s[j]) ; j++){
                    temp += s[j];
                }
                i = j;
                temp = rev(temp);
                res += temp;
            }else{
                res += s[i];
                i++;
            }
        }
        return rev(res);
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends