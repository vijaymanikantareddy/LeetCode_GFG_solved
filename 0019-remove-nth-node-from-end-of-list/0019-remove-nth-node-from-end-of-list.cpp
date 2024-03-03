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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode * tmp=head, *ptr=head;
        while(tmp!=NULL){
            cnt++;
            tmp = tmp->next;
        }
        if(cnt==n){
            head = head->next;
            delete ptr;
            return head;
        }
        tmp = ptr->next;
        for(int i=1 ; i<(cnt-n) ; i++){
            ptr = tmp;
            tmp = tmp->next;
        }
        ptr->next = tmp->next;
        delete tmp;
        return head;
    }
};