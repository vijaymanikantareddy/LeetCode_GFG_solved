/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        ListNode a = head, b = head;
        int front = k, back = k, cnt = 0;
        while(a != null && front-- > 1){
            a = a.next;
        }
        ListNode ptr = head;
        while(ptr != null){
            cnt++;
            ptr = ptr.next;
        }
        back = cnt-k;
        while(b != null && back-->0){
            b = b.next;
        }
        int aVal = a.val, bVal = b.val;
        a.val = bVal;
        b.val = aVal;
        return head;
    }
}