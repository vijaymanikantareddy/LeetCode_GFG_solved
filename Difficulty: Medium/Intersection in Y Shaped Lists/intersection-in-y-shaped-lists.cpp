/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        unordered_set<Node*> se;
        Node* te = head1;
        while(te != NULL){
            se.insert(te);
            te = te->next;
        }
        te = head2;
        while(te != NULL){
            if(se.find(te) != se.end()){
                return te;
            }
            te = te->next;
        }
        return head1;
    }
};