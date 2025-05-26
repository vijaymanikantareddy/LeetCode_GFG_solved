/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        Node *newnode = new Node(data);
        Node *ptr = head;
        if(head->data >= data){
            newnode->next = head;
            Node* temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = newnode;
            head = newnode;
            return head;
        }
        else{
            Node* preptr = NULL;
            while(ptr->data <= data && ptr->next != head){
                preptr = ptr;
                ptr = ptr->next;
            }
            if(ptr->next == head && ptr->data <= data){
                ptr->next = newnode;
                newnode->next = head;
                return head;
            }
            preptr->next = newnode;
            newnode->next = ptr;
        }
        return head;
    }
};