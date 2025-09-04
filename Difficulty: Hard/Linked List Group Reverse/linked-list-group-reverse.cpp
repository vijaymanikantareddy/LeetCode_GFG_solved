/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        Node *pre = NULL, *ptr = head, *ne;
        int cnt = 0;
        while(ptr and cnt < k){
            ne = ptr->next;
            ptr->next = pre;
            pre = ptr;
            ptr = ne;
            cnt++;
        }
        if(cnt < k){
            return pre;
        }
        // cout<<ne->data<<" \n";
        Node *b = pre;
        while(b->next != NULL){
            b = b->next;
        }
        // cout<<b->data<<"\n";
        b->next = reverseKGroup(ptr, k);
        return pre;
    }
};