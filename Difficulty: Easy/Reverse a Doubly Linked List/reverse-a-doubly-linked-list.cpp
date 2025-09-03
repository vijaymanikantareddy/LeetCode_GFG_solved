/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* pre = NULL;
        Node* curr = head;
        while(curr != NULL){
            Node* ne = curr->next;
            curr->next = pre;
            curr->prev = ne;
            
            pre = curr;
            curr = ne;
        }
        return pre;
    }
};