//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        if(A[0][0] == 0) return -1;
        if(X == 0 && Y == 0) return 0;
        queue<pair<pair<int, int>, int>>q;
        vector<vector<bool>> vis(N, vector<bool>(M, false));
        int dr[4] = {1, 0, -1, 0};
        int dc[4] = {0, 1, 0, -1};
        q.push({{0, 0}, 1});
        vis[0][0] = true;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int cost = q.front().second;
            q.pop();
            for(int i = 0 ; i < 4 ; i++){
                int nr = r + dr[i];
                int nc = c + dc[i];
                if(nr >= 0 && nr < N && nc >= 0 && nc < M && A[nr][nc] == 1 && !vis[nr][nc]){
                    vis[nr][nc] = true;
                    if(nr == X && nc == Y) return cost;
                    q.push({{nr, nc}, cost+1});
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends