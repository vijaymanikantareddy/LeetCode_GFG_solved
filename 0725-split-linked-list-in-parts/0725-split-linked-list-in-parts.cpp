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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* ptr = head;
        int n = 0;
        while(ptr != NULL){
            ptr = ptr->next;
            n++;
        }
        vector<ListNode*> res(k, NULL);
        int part = n/k;
        int extra = n%k;
        ptr = head;
        for(int i = 0 ; i < k && ptr ; i++){
            res[i] = ptr;
            ListNode* pre = ptr;
            int le = part + (extra > 0);
            extra--;
            for(int j = 0 ; j < le && ptr ; j++){
                pre = ptr;
                ptr = ptr->next;
            }
            pre->next = NULL;
        }
        return res;
    }
};