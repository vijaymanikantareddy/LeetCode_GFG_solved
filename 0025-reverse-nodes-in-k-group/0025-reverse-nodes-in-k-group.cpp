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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *pre = NULL, *ptr = head, *ne;
        int cnt = 0;
        while(ptr != NULL){
            cnt++;
            ptr = ptr->next;
        }
        if(cnt < k){
            return head;
        }
        ptr = head;
        cnt = 0;
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
        ListNode * b = pre;
        while(b->next != NULL){
            b = b->next;
        }
        b->next = reverseKGroup(ptr, k);
        return pre;
    }
};