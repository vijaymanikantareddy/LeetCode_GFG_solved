class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if(source == target) return 0;
        unordered_map<int, unordered_set<int>> adj;
        for(int i = 0 ; i < routes.size() ; i++){
            for(auto it: routes[i]){
                adj[it].insert(i);
            }
        }
        unordered_set<int> vis;
        queue<pair<int, int>> q;
        q.push({source, 0});
        while(!q.empty()){
            int cur = q.front().first;
            int cost = q.front().second;
            q.pop();
            if(cur == target) return cost;
            for(auto i: adj[cur]){
                for(auto it: routes[i]){
                    if(vis.find(it) == vis.end()){
                        vis.insert(it);
                        q.push({it, cost+1});
                    }
                }
                routes[i].clear();
            }
        }
        return -1;
    }
};