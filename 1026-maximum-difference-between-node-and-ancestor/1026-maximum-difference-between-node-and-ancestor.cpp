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
    int solve(TreeNode* root, int mi, int ma){
        if(root == NULL) return ma-mi;
        mi = min(root->val, mi);
        ma = max(root->val, ma);
        return max(solve(root->left, mi, ma), solve(root->right, mi, ma));
    }
    int maxAncestorDiff(TreeNode* root) {
        int mi = INT_MAX, ma = INT_MIN;
        return solve(root, mi, ma);
    }
};