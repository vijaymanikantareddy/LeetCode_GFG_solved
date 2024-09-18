//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(char ch: x){
            if(ch=='(' or ch=='{' or ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if((st.top()=='{' and ch=='}') or 
                (st.top()=='(' and ch==')') or 
                (st.top()=='[' and ch==']')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends