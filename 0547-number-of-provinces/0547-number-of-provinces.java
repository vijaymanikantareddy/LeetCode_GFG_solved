class Solution {
    public void dfs(List<Integer>[] adj, int s, int[] vis){
        vis[s] = 1;
        for(int it: adj[s]){
            if(vis[it] == 0)
                dfs(adj, it, vis);
        }
    }
    public int findCircleNum(int[][] isConnected) {
        int n = isConnected.length;
        List<Integer>[] adj = new ArrayList[n];
        for(int i = 0 ; i < n ; i++){
            adj[i] = new ArrayList<>();
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = i; j < isConnected[i].length; j++){
                if(i == j){
                    continue;
                }
                 if (isConnected[i][j] == 1) {
                    adj[i].add(j);
                    adj[j].add(i);
                }
            }
        }
        int[] vis = new int[n];
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (vis[i] == 0) {
                res++;
                dfs(adj, i, vis);
            }
        }
        return res;
    }
}