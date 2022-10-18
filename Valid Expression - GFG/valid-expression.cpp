//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool valid(string s)
{
    // code here
    stack<char> st;
    for(char ch: s){
        if(ch=='{' or ch=='(' or ch=='['){
            st.push(ch);
        }
        else{
            if(st.empty())
                return false;
            if((ch=='}' and st.top()=='{') or (ch==')' and st.top()=='(') or (ch==']' and st.top()=='[')){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}