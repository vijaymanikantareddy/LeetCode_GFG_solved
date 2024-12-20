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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int size = q.size();
            vector<TreeNode*> levelNodes;
            for(int i = 0 ; i < size ; i++){
                TreeNode* cur = q.front();
                q.pop();
                levelNodes.push_back(cur);
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            if(level&1){
                int n = levelNodes.size();
                for(int i = 0 ; i < n/2 ; i++){
                    swap(levelNodes[i]->val, levelNodes[n - i - 1]->val);
                }
            }
            level++;
        }
        return root;
    }
};