//{ Driver Code Starts
//Initial Template for Java

//Initial Template for Java
import java.io.*;
import java.util.*;

// } Driver Code Ends
//User function Template for Java

class Solution{
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data = data;
            next = null;
        }
    }
    static int find(int N){
        // code here
        //Creating a Circular Linkedlist
        Node head = null;
        Node ptr = head;
        for (int i = 1; i <= N; i+=2) {
            Node newnode = new Node(i);
            if (head == null) {
                head = newnode;
                newnode.next = head;
                ptr = head;
            } else {
                ptr.next = newnode;
                newnode.next = head;
                ptr = ptr.next;
            }
        }
        
        //Traversing Nodes until only one node remains
        Node curr = head;
        while (curr.next != curr) { // if one node remains then it stops
            curr.next = curr.next.next;
            curr = curr.next;
        }
        return N%2==0? curr.data : curr.data-2;
    }
}

//{ Driver Code Starts.
class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            int N = Integer.parseInt(read.readLine());
           
            Solution ob = new Solution();
            System.out.println(ob.find(N));
        }
    }
}
// } Driver Code Ends