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
    int fun(vector<int>& v){
        vector<pair<int, int>> te;
        for(int i = 0 ; i < v.size() ; i++){
            te.push_back({v[i], i});
        }
        sort(te.begin(), te.end());
        int cnt = 0;
        for(int i = 0 ; i < te.size() ; ++i){
            if(te[i].first != v[i]){
                cnt++;
                swap(te[i], te[te[i].second]);
                --i;
            }
        }
        return cnt;
    }
    int minimumOperations(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int res = 0;
        while(!q.empty()){
            int n = q.size();
            vector<int> v;
            for(int i = 0 ; i < n ; i++){
                TreeNode* curr = q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            res += fun(v);
        }
        return res;
    }
};