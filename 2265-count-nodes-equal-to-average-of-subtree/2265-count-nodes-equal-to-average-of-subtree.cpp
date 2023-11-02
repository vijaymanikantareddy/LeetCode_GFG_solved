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
    int res = 0;
    pair<int, int> dfs(TreeNode* root){
        if(root == NULL){
            return {0, 0};
        }
        pair<int, int> l = dfs(root->left);
        pair<int, int> r = dfs(root->right);
        int s = l.first + r.first + root->val;
        int c = l.second + r.second + 1;
        if(c != 0 && s/c == root->val){
            res++;
        }
        return {s, c};
    }
    int averageOfSubtree(TreeNode* root) {
        pair<int, int> temp = dfs(root);
        return res;
    }
};