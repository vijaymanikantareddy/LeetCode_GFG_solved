/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0){
            return head;
        }
        int cnt = 0; //count number of nodes;
        ListNode* ptr = head; //iterator
        while(ptr != NULL){
            ptr = ptr->next;
            cnt++;
        }
        k = k%cnt;  //remove unwanted rotations
        if(k == 0){
            return head;
        }
        ptr = head;
        int i = 1;
        while(i < (cnt - k)){ //to know last node of first half
            ptr = ptr->next;
            i++;
        }
        ListNode* res = ptr->next; //start of second half
        ptr->next = NULL;    //last node of first half is null
        ListNode* temp = res; //find last node of second half and make it null
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = head;
        head = res;
        return head;
    }
};