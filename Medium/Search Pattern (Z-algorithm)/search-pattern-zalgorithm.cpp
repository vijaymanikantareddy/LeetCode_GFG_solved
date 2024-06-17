//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code hee.
            vector<int> res;
            for(int i = 0 ; i < txt.size()-pat.size()+1 ; i++){
                if(pat[0] == txt[i]){
                    // cout << txt[i] << " " << i << endl;
                    bool flag = true;
                    for(int j = 0 ; j < pat.size() ; j++){
                        if(pat[j] != txt[i+j]){
                            flag = false;
                            break;
                        }
                    }
                    if(flag) res.push_back(i+1);
                }
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
        if(res.size()==0)
            cout<<"-1 ";
        else
            for (int i : res)
                cout << i << " ";
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends