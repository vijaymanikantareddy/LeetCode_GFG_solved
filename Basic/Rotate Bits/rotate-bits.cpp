//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        int fun(vector<int> v){
            int n = 0;
            for(int i = 0 ; i < v.size() ; i++){
                if(v[i] == 1){
                    n += pow(2, i);
                }
            }
            return n;
        }
        vector<int> rotate (int n, int d)
        {
            //code here.
            vector<int> num(16, 0);
            d = d%16;
            int t = n;
            int i = 0;
            while(t && i < 16){
                if(t&1){
                    num[i] = 1;
                }
                t >>= 1;
                i++;
            }
            
            vector<int> temp = num;
            reverse(temp.begin(), temp.end() - d);
            reverse(temp.begin() + 16 - d, temp.end());
            reverse(temp.begin(), temp.end());
            int a = fun(temp);
            
            temp = num;
            reverse(temp.begin(), temp.begin() + d);
            reverse(temp.begin()+d, temp.end());
            reverse(temp.begin(), temp.end());
            int b = fun(temp);
            
            return {a, b};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends