//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
    vector<vector<int>> AllSubsets(vector<int> arr, int n)
    {
        // code here 
        set<vector<int>> res;
        reverse(arr.begin(), arr.end());
        int cnt = pow(2, n);
        for(int i = 0 ; i < cnt ; i++){
            vector<int> temp;
            int n = i, j = 0;
            while(n){
                if((n&1) == 1){
                    temp.push_back(arr[j]);
                }
                n >>= 1;
                j++;
            }
            sort(temp.begin(), temp.end());
            res.insert(temp);
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends