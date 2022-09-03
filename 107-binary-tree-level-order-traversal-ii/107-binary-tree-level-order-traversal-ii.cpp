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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>>ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> tmp;
            int n = q.size();
            for(int i=0 ; i<n ; i++){
                TreeNode* node = q.front();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                tmp.push_back(node->val);
                q.pop();
            }
            ans.push_back(tmp);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};