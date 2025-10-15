/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int fun(Node* root, int& k){
        if(root == NULL) return -1;
        int left = fun(root->left, k);
        if(left != -1){
            return left;
        }
        k--;
        if(k == 0) return root->data;
        return fun(root->right, k);
    }
    int kthSmallest(Node *root, int k) {
        // code here
        return fun(root, k);
    }
};