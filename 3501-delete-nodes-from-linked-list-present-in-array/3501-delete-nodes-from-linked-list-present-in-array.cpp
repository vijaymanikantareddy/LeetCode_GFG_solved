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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> se;
        for(auto it: nums) se.insert(it);
        ListNode* res = new ListNode(-1);
        res->next = head;
        ListNode *pre = res, *cur = head;
        while(cur != NULL){
            if(se.find(cur->val) != se.end()){
                pre->next = cur->next;
            }else{
                pre = cur;
            }
            cur = pre->next;
        }
        return res->next;
    }
};