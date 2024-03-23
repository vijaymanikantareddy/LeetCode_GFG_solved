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
    ListNode* reverseList(ListNode* head){
        ListNode* pre = NULL, *curr = head;
        while(curr != NULL){
            ListNode *ne = curr->next;
            curr->next = pre;
            pre = curr;
            curr = ne;
        }
        return pre;
    }
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL){
            return ;
        }
        
        ListNode *slow = head, *fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *revs = reverseList(slow->next);
        slow->next = NULL;
        ListNode* cur = head;
        while(revs != NULL){
            ListNode *t1 = cur->next;
            ListNode *t2 = revs->next;
            cur->next = revs;
            revs->next = t1;
            cur = t1;
            revs = t2;
        }
    }
};