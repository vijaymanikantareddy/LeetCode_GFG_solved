class Solution {
public:
    int dfs(int current,int parent,vector<int> adjList[],vector<int> &nodeValues,int k,int &componentCount){
        int sum=0;
        for(auto neighbor:adjList[current]){
            if(neighbor!=parent){
                // Goes upto leafnodes and splits there if the leafnode sum is divisible by k
                sum+=dfs(neighbor,current,adjList,nodeValues,k,componentCount);
                // To make sure that the sum stays within bounds
                sum%=k;
            }
        }
        sum+=nodeValues[current];
        sum%=k;
        if(sum==0){
            componentCount++;
        }
        return sum;
    }
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        // Construct the given undirected tree as a graph
        vector<int> adjList[n];
        for(auto edge:edges){
            int node1=edge[0],node2=edge[1];
            adjList[node1].push_back(node2);
            adjList[node2].push_back(node1);
        }
        int componentCount=0;
        // Imagine root as 0 and it's parent is -1
        dfs(0,-1,adjList,values,k,componentCount);
        return componentCount;
    }
};