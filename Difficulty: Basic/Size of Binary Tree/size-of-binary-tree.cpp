/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int cnt = 0;
    void fun(Node* root){
        if(!root) return ;
        cnt++;
        fun(root->left);
        fun(root->right);
    }
    int getSize(Node* root) {
        // code here
        fun(root);
        return cnt;
    }
};