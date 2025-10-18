/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void inorder(struct Node* root, vector<int>& ve){
        if(root == NULL) return;
        inorder(root->left, ve);
        ve.push_back(root->data);
        inorder(root->right, ve);
    }
    int findMedian(Node* root) {
        // Code here
        vector<int> ve;
        inorder(root, ve);
        int n = ve.size();
        if(n%2 != 0){
            return ve[n/2];
        }
        return ve[(n - 1)/2];
    }
};