//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        deque<int> dq;
        for(int i = 1; i <= N ; i++){
            dq.push_back(i);
        }
        bool flag = true;
        while(dq.size() > 1){
            if(flag){
                int cnt = 0;
                while(cnt < K && dq.size()>1){
                    dq.pop_front();
                    cnt++;
                }
                
            }else{
                int cnt = 0;
                while(cnt < K && dq.size()>1){
                    dq.pop_back();
                    cnt++;
                }
                
            }
            flag = !flag;
        }
        return dq.front();
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends