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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int i=1, res=1, mxsum=INT_MIN;
        while(!q.empty()){
            int n = q.size();
            int sum=0;
            for(int i=0 ; i<n ; i++){
                TreeNode* node = q.front();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                sum+=node->val;
                q.pop();
            }
            if(sum>mxsum){
                mxsum=sum;
                res = i;
            }
            i++;
        }
        return res;
    }
};