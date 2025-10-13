/*
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    unordered_map<Node*, int> dp;
    int getMaxSum(Node *root) {
        // code here
        if(root == NULL) return 0;
        if(dp.find(root) != dp.end()) return dp[root];
        int take = root->data, notake = 0;
        if(root->left){
            take += getMaxSum(root->left->left);
            take += getMaxSum(root->left->right);
        }
        if(root->right){
            take += getMaxSum(root->right->left);
            take += getMaxSum(root->right->right);
        }
        notake = getMaxSum(root->left) + getMaxSum(root->right);
        return dp[root] = max(take, notake);
    }
};