//{ Driver Code Starts
import java.util.Scanner;

// Node Class
class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}



public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            Node start = null;
            Node temp=null, r = null;

            // Create linked list from the array arr[].
            // Created linked list will be 1->2->11->56->12
            if (n > 0) {
                int arr = sc.nextInt();

                temp = new Node(arr);
                start = temp;
                r = start;
            }

            for (int i = 0; i < n - 1; i++) {
                int arr = sc.nextInt();
                temp = new Node(arr);
                r.next = temp;
                r = r.next;
            }

            if (n > 0)
            {
                temp.next = start;
                r = temp; 
            }


            int x = sc.nextInt();
            Solution ob = new Solution();
            start = ob.sortedInsert(start, x);
            printList(start);
            r = start;
            while (r != start.next) {
                temp = start;
                start = start.next;
                temp = null;
            }
            temp = null;
        }
    }

    /* Function to print Nodes in a given linked list */
    static void printList(Node start) {
        Node temp;

        if (start != null) {
            temp = start;
            do {
                System.out.print(temp.data + " ");
                temp = temp.next;
            } while (temp != start);
            System.out.println();
        }
    }
}

// } Driver Code Ends






/*Complete the function below
Node is as follows:
class Node{
	int data;
	Node next;
	Node(int d){
		data=d;
		next=null;
	}
}*/
class Solution
{
	public static Node sortedInsert(Node head,int data)
    {
        //add code here.
        if(head == null){
            Node newnode = new Node(data);
            newnode.next = newnode;
            return newnode;
        } 
        Node newnode = new Node(data);
        Node ptr = head;
        if(head.data >= data){
            newnode.next = head;
            Node temp = head;
            while(temp.next != head){
                temp = temp.next;
            }
            temp.next = newnode;
            head = newnode;
            return head;
        }
        else{
            Node preptr = null;
            while(ptr.data <= data && ptr.next != head){
                preptr = ptr;
                ptr = ptr.next;
            }
            if(ptr.next == head && ptr.data <= data){
                ptr.next = newnode;
                newnode.next = head;
                return head;
            }
            preptr.next = newnode;
            newnode.next = ptr;
        }
        return head;
    }
}