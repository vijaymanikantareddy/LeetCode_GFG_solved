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
    string tree2str(TreeNode* root) {
        if(root == NULL) return "";
        string v = to_string(root->val);
        string s = "";
        if(root->left == NULL && root->right == NULL) return v;
        if(root->left){
            s += "("+tree2str(root->left)+")";
        }else{
            s += "()";
        }
            
        if(root->right)
            s += "("+tree2str(root->right)+")";
        return v+s;
    }
};