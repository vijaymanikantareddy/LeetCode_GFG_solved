//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here
            vector<int> res;
            for(int i = 0 ; i < txt.size() ; i++){
                bool flag = true;
                for(int j = 0 ; j < pat.size() ; j++){
                    if(txt[i + j] != pat[j]){
                        flag = false;
                        break;
                    }
                }
                if(flag) res.push_back(i+1);
            }
            if(res.size()>0) return res;
            return {-1};
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
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends