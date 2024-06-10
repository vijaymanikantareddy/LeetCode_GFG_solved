//{ Driver Code Starts
#include <bits/stdc++.h>
#define N 10000
using namespace std;


// } Driver Code Ends
class Solution{
public:
    vector<int> print_next_greater_freq(int arr[],int n)
    {
        // code here
        vector<int> res(n);
        stack<int> st;
        unordered_map<int, int> mp;
        for(int i = 0 ; i < n ; i++) mp[arr[i]]++;
        for(int i = n-1 ; i >= 0 ; i--){
            while(!st.empty() && mp[arr[st.top()]] <= mp[arr[i]]){
                st.pop();
            }
            res[i] = st.empty()? -1: arr[st.top()];
            st.push(i);
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int arr[N];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans=ob.print_next_greater_freq(arr,n);
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout << endl;
    }
	return 1;
}

// } Driver Code Ends