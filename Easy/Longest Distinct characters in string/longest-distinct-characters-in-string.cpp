//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    map<char, int> mp;
    int res = 0;
    int i = 0, j = 0;
    while(i < S.size()){
        mp[S[i]]++;
        while(mp[S[i]] > 1){
            mp[S[j++]]--;
        }
        res = max(res, i - j + 1);
        i++;
    }
    return res;
}