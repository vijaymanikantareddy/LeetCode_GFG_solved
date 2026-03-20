/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void fun(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        
        if(root == NULL)
            return;
        
        if(root->data < key){
            if(pre != NULL){
                if(root->data > pre->data){
                    pre=root;
                }
            }
            else{
                pre=root;
            }
        }
        if(root->data > key){
            if(suc != NULL){
                if(root->data < suc->data){
                    suc=root;
                }
            }
            else{
                suc = root;
            }
        }
        fun(root->left, pre, suc, key);
        fun(root->right, pre, suc, key);
    }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node* pre = NULL, *suc = NULL;
        vector<Node*> res;
        fun(root, pre, suc, key);
        res.push_back(pre);
        res.push_back(suc);
        return res;
    }
};