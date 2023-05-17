class Solution {
public:
    void dfs(vector<int> adj[], vector<int>& vis, int source, int n){
        vis[source] = 1;
        for(auto it: adj[source]){
            if(!vis[it]){
                dfs(adj, vis, it, n);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> vis(rooms.size(), 0);
        vector<int> adj[rooms.size()];
        for(int i = 0 ; i < rooms.size() ; i++){
            for(int j = 0 ; j < rooms[i].size() ; j++){
                adj[i].push_back(rooms[i][j]);
            }
        }
        dfs(adj, vis, 0, rooms.size());
        for(int i : vis){
            if(i == 0){
                return false;
            }
        }
        return true;
    }
};