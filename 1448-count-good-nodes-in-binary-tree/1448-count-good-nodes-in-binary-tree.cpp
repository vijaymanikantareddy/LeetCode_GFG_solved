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
    int fun(TreeNode*root, int curval){
        if(root==NULL)
            return 0;
        int res=0;
        if(root->val>=curval){
            res=1;
        }
        curval = max(curval, root->val);
        res += fun(root->left, curval);
        res += fun(root->right, curval);
        return res;
    }
    int goodNodes(TreeNode* root) {
        return fun(root, root->val);
    }
};