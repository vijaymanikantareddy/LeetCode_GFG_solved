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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int, ListNode*> prefix;
        ListNode *dummyNode = new ListNode(0, head);
        int sum = 0;
        prefix[0] = dummyNode;
        while(head){
            sum += head->val;
            prefix[sum] = head;
            head = head->next;
        }
        sum = 0;
        head = dummyNode;
        while(head){
            sum += head->val;
            if(prefix[sum] != head){//if it's not the current node we're on
                head->next = prefix[sum]->next;
            }
            head = head->next;
        }
        return dummyNode->next;
    }
};