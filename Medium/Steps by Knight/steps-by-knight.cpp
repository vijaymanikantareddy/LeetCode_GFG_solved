//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int ka = KnightPos[0]-1, kb = KnightPos[1]-1;
	    int ta = TargetPos[0]-1, tb = TargetPos[1]-1;
	    int dirX[] = {1, -1, 1, -1, 2, -2, 2, -2};
	    int dirY[] = {2, 2, -2, -2, -1, 1, 1, -1};
	    queue<vector<int>> pq;
	    vector<vector<int>> vis(N, vector<int>(N, 0));
	    vis[ka][kb] = 1;
	    pq.push({0, KnightPos[0]-1, KnightPos[1]-1});
	    while(!pq.empty()){
	        int cost = pq.front()[0];
	        int x = pq.front()[1];
	        int y = pq.front()[2];
	       // cout << x << " " << y << " -> " << cost << endl;
	        if(x == ta && y == tb){
	            return cost;
	        }
	        pq.pop();
	        for(int i = 0 ; i < 8 ; i++){
	            int nx = x + dirX[i];
	            int ny = y + dirY[i];
	            if(nx >= 0 && ny >= 0 && nx < N && ny < N && vis[nx][ny] == 0){
	                vis[nx][ny] = 1;
	                pq.push({cost+1, nx, ny});
	            }
	        }
	    }
	    return -1;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends