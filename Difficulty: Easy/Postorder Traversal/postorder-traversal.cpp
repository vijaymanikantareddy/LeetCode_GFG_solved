/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void traverse(Node* root, vector<int>& res){
        if(root == NULL) return ;
        traverse(root->left, res);
        traverse(root->right, res);
        res.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> res;
        traverse(root, res);
        return res;
    }
};