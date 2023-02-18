//{ Driver Code Starts
import java.io.*;
import java.util.*;
class Node
{
    int data;
    Node next;
    
    Node(int x)
    {
        data = x;
        next = null;
    }
}
class GfG
{
    public static void printList(Node node) 
    { 
        while (node != null)
        { 
            System.out.print(node.data);
            node = node.next; 
        }  
        System.out.println();
    } 
    public static void main(String args[])throws IOException
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    String s = sc.next();
                    Node head = new Node( s.charAt(0) - '0' );
                    Node tail = head;
                    for(int i=1; i<s.length(); i++)
                    {
                        tail.next = new Node( s.charAt(i) - '0' );
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

class Solution
{
    public static Node addOne(Node head) 
    { 
        //code here.
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
