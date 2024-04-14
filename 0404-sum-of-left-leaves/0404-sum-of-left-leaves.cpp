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
    int sum;
    void dfs(TreeNode* node){
        if(node->left != NULL){
            if(node->left->left == NULL && node->left->right == NULL){
                sum += node->left->val;
            }
            dfs(node->left);
        }
        if(node->right != NULL){
            dfs(node->right);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        sum = 0;
        dfs(root);
        return sum;
    }
};