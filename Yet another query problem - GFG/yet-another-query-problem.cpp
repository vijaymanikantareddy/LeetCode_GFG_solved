//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        // code here
        vector<int> freq(N);
        vector<int> res;
        for(int i = 0 ; i < N ; i++){
            int cnt = 0;
            for(int j = i ; j < N ; j++){
                if(A[i] == A[j]){
                    cnt++;
                }
            }
            freq[i] = cnt;
        }
        for(auto it: Q){
            int cnt = 0;
            for(int i = it[0] ; i <= it[1] ; i++){
                if(it[2] == freq[i]){
                    cnt++;
                }
            }
            res.push_back(cnt);
        }
        return res;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends