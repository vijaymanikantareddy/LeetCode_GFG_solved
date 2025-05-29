/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    int ans = 0, mxlen = 0;
    void solve(Node* root, int sum, int len){
        if(root == NULL){
            if(len > mxlen){
                ans = sum;
                mxlen = len;
            }
            if(len == mxlen){
                ans = max(ans, sum);
            }
            return;
        }
        solve(root->left, sum+root->data, len+1);
        solve(root->right, sum+root->data, len+1);
    }
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        solve(root, 0, 1);
        return ans;
    }
};