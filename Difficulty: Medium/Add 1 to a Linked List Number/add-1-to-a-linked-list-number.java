//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}

class GfG {
    public static void printList(Node node) {
        while (node != null) {
            System.out.print(node.data);
            node = node.next;
        }
        System.out.println();
    }

    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String str[] = read.readLine().trim().split(" ");
            int n = str.length;
            Node head = new Node(Integer.parseInt(str[0]));
            Node tail = head;
            for (int i = 1; i < n; i++) {
                tail.next = new Node(Integer.parseInt(str[i]));
                tail = tail.next;
            }
            Solution obj = new Solution();
            head = obj.addOne(head);
            printList(head);
        }
    }
}
// } Driver Code Ends


/*
class Node{
    int data;
    Node next;

    Node(int x){
        data = x;
        next = null;
    }
}
*/

class Solution {
    public Node addOne(Node head) {
        // code here.
         Node ne, pre = null, curr = head;
        while(curr != null){
            ne = curr.next;
            curr.next = pre;
            pre = curr;
            curr = ne;
        }
        head = pre;
        curr = head;
        int c = 1;
        pre = head;
        while(c != 0){
            if(curr != null){
                curr.data += c;
                c = curr.data/10;
                curr.data = curr.data%10;
                pre = curr;
                curr = curr.next;
            }
            else{
                Node newnode = new Node(1);
                pre.next = newnode;
                break;
            }
        }
        pre = null;
        curr = head;
        while(curr != null){
            ne = curr.next;
            curr.next = pre;
            pre = curr;
            curr = ne;
        }
        return pre;
    }
}
