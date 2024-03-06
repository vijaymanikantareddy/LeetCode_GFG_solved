//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int> res;
            int i = 0;
            while(i < text.size()){
                int j = 0, ind = i;
                while(ind < text.size() && j < pattern.size() && text[ind] == pattern[j]){
                    ind++;
                    j++;
                }
                if(j == pattern.size()) res.push_back(i+1);
                i++;
            }
            return res;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends