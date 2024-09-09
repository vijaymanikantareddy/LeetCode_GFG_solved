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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<int> a(n, -1);
        vector<vector<int>> res(m, a);
        int left = 0, right = n-1, top = 0, bottom = m-1;

        ListNode* temp = head;
        while(temp != NULL){
            int in = left;
            while(in <= right){
                if(temp == NULL){
                    return res;
                }
                res[top][in] = temp->val;
                temp = temp->next;
                in++;
            }
            top++;
            in = top;
            while(in <= bottom){
                if(temp == NULL){
                    return res;
                }
                res[in][right] = temp->val;
                temp = temp->next;
                in++;
            }
            right--;
            in = right;
            while(in >= left){
                if(temp == NULL){
                    return res;
                }
                res[bottom][in] = temp->val;
                temp = temp->next;
                in--;
            }
            bottom--;
            in = bottom;
            while(in >= top){
                if(temp == NULL){
                    return res;
                }
                res[in][left] = temp->val;
                temp = temp->next;
                in--;
            }
            left++;
        }
        return res;
    }
};