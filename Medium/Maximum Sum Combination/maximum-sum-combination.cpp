//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        for(int i = A.size()-1 ; i >= 0 ; i--){
            for(int j = B.size()-1 ; j >= 0 ; j--){
                int s = A[i] + B[j];
                if(pq.size() < K){
                    pq.push(s);
                }else if(pq.top() < s){
                    pq.pop();
                    pq.push(s);
                }else{
                    break;
                }
            }
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top());
            pq.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends