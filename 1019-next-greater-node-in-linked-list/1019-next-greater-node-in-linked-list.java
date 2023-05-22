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
    public int[] nextLargerNodes(ListNode head) {
        if(head == null){
            return new int[0];
        }
        int cnt = 0;
        ListNode trav = head;
        while(trav != null){
            cnt++;
            trav = trav.next;
        }
        
        int res[] = new int[cnt];
        System.out.print(cnt);
        ListNode ptr = head;
        trav = head;
        int i = 0;
        while(ptr != null){
            trav = ptr.next;
            int mx = 0;
            while(trav != null){
                if(trav.val > ptr.val){
                    mx = trav.val;
                    break;
                }
                trav = trav.next;
            }
            if(trav != null){
                res[i] = trav.val;
            }else{
                res[i] = 0;
            }
            ptr = ptr.next;
            i++;
        }
        
        return res;
    }
}