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
    void inorder(TreeNode* root, vector<int>& v){
        if(root == NULL) return;
        inorder(root->left, v);
        if(root->left == NULL && root->right == NULL){
            v.push_back(root->val);
            return;
        }
        inorder(root->right, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a, b;
        inorder(root1, a);
        inorder(root2, b);
        if(a.size() != b.size()) return false;
        for(int i = 0 ; i < a.size() ; i++){
            if(a[i] != b[i]) return false;
        }
        return true;
    }
};