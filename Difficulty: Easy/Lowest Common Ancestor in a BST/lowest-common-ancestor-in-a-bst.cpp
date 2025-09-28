/*
// Tree Node
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
    Node* LCA(Node* root, Node* n1, Node* n2) {
        // code here
        Node* res = root;
        while(true){
            int cur = res->data;
            if(n1->data < cur && n2->data < cur){
                res = res->left;
            }else if(n1->data > cur && n2->data > cur){
                res = res->right;
            }
            else{
                break;
            }
        }
        return res;
    }
};