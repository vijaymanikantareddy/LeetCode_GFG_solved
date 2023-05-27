//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class Node
{
    int data;
    Node next;
    public Node(int data)
    {
        this.data=data;
    }
}
class GFG{
    public static void main(String args[]) throws IOException { 
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out=new PrintWriter(System.out);
        int t = Integer.parseInt(in.readLine());

        while (t-- > 0) {
            int n=Integer.parseInt(in.readLine().trim());
            String s[]=in.readLine().trim().split(" ");
            Node head=new Node(Integer.parseInt(s[0]));
            Node copy=head;
            for(int i=1;i<n;i++){
                Node temp=new Node(Integer.parseInt(s[i]));
                copy.next=temp;
                copy=copy.next;
            }
            Solution ob=new Solution();
            Node ans=ob.modifyTheList(head);
            while(ans!=null){
                out.print(ans.data+" ");
                ans=ans.next;
            }out.println();
        }
        out.close();
    }
}
// } Driver Code Ends


//User function Template for Java
class Solution
{
    public static Node reverse(Node head){
        Node prev = null, ptr = head;
        while(ptr != null){
            Node temp = ptr.next;
            ptr.next = prev;
            prev = ptr;
            ptr = temp;
        }
        return prev;
    }
    public static Node modifyTheList(Node head)
    {
        if(head == null){
            return head;
        }
        Node slow = head, fast = head.next;
        while(fast.next != null && fast.next.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        Node firstHalf = head;
        Node secondHalf = reverse(slow.next);
        slow.next = null;
        Node first = firstHalf, second = secondHalf;
        while(first != null && second != null){
            int temp = first.data;
            first.data = second.data-first.data;
            second.data = temp;
            first = first.next;
            second = second.next;
        }
        slow.next = reverse(secondHalf);
        return head;
    }
}