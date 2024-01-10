/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, map<int, set<int>>& adj, map<int, int>& vis){
        if(root == NULL) return;
        if(root->left){
            vis[root->val] = 0;
            vis[root->left->val] = 0;
            adj[root->val].insert(root->left->val);
            adj[root->left->val].insert(root->val);
            inorder(root->left, adj, vis);
        }
        if(root->right){
            vis[root->val] = 0;
            vis[root->right->val] = 0;
            adj[root->val].insert(root->right->val);
            adj[root->right->val].insert(root->val);
            inorder(root->right, adj, vis);
        }
    }
    int amountOfTime(TreeNode* root, int start) {
        map<int, set<int>> adj;
        map<int, int> vis;
        inorder(root, adj, vis);
        int n = adj.size();
        int ans = 0;
        priority_queue<pair<int, int>> pq;
        pq.push({start, 0});
        while(!pq.empty()){
            int t = pq.size();
            int node = pq.top().first;
            int cnt = pq.top().second;
            pq.pop();
            vis[node] = 1;
            for(auto it: adj[node]){
                if(vis[it] == 0){
                    pq.push({it, cnt+1});
                }
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};