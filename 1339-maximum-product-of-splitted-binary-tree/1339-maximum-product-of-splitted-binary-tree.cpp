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
    long long mod = 1e9 + 7;
    long long res = 0;
    long long dfs(TreeNode* node){
        if(node == NULL){
            return 0;
        }
        node->val += dfs(node->left) + dfs(node->right);
        return node->val;
    }
    int maxProduct(TreeNode* root) {
        long long s = dfs(root);

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();

            long long curr = (s - node->val) * node->val;
            res = max(res, curr);

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }

        return res % mod;
    }
};