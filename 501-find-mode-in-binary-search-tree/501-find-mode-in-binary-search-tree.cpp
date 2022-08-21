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
    unordered_map<int, int> inor;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        inor[root->val]++;
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        vector<int> res;
        int max= inor[root->val], m=root->val;
        for(auto it: inor){
            if(it.second>max){
                max = it.second;
            }
        }
        for(auto it: inor){
            if(it.second==max){
                res.push_back(it.first);
            }
        }
        return res;
    }
};