/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int nodeSum(Node* root, int l, int r) {
        // code here
        if(root == NULL){
            return 0;
        }
        int a = nodeSum(root->left, l, r);
        int b = nodeSum(root->right, l, r);
        int d = root->data;
        if(d >= l && d <= r){
            return d + a + b;
        }else{
            return a + b;
        }
    }
};
