/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        // code here
        Node* frontNode = head;
        int steps = k;
        while(frontNode != NULL && steps-- > 1){
            frontNode = frontNode->next;
        }
        
        int length = 0;
        Node* temp = head;
        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        if(length < k) return head;
        int stepsFromStart = length - k;
        Node* endNode = head;
        while(endNode != NULL && stepsFromStart-- > 0){
            endNode = endNode->next;
        }
        
        int tempData = frontNode->data;
        frontNode->data = endNode->data;
        endNode->data = tempData;
        return head;
    }
};