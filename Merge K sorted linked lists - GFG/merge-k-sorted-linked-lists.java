//{ Driver Code Starts
import java.util.*;

class Node
{
    int data;
    Node next;
    
    Node(int key)
    {
        data = key;
        next = null;
    }
}


class GfG
{
    public static void printList(Node node)
    {
        while(node != null)
        {
            System.out.print(node.data + " ");
            node = node.next;
        }
    }
    
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        while(t-- > 0)
        {   
            int N = sc.nextInt();
            
            Node []a = new Node[N];
            
            for(int i = 0; i < N; i++)
            {
                int n = sc.nextInt();
                
                Node head = new Node(sc.nextInt());
                Node tail = head;
                
                for(int j=0; j<n-1; j++)
                {
                    tail.next = new Node(sc.nextInt());
                    tail = tail.next;
                }
                
                a[i] = head;
            }
            
            Solution g = new Solution();
             
            Node res = g.mergeKList(a,N);
            if(res!=null)
                printList(res);
            System.out.println();
        }
    }
}
// } Driver Code Ends


/*class Node
{
    int data;
    Node next;
    
    Node(int key)
    {
        data = key;
        next = null;
    }
}
*/

// a is an array of Nodes of the heads of linked lists
// and N is size of array a


class Solution
{
    //Function to merge K sorted linked list.
    Node mergeTwoLists(Node list1, Node list2){
        Node res = new Node(0);
        Node ptr = res;
        Node a = list1, b = list2;
        while(a!=null && b!=null){
            if(a.data < b.data){
                ptr.next = a;
                a = a.next;
                ptr = ptr.next;
            }
            else{
                ptr.next = b;
                b = b.next;
                ptr = ptr.next;
            }
        }
        if(a == null){
            ptr.next = b;
        }
        else if(b == null){
            ptr.next = a;
        }
        return res.next;
    }
    Node mergeKList(Node[]arr,int K)
    {
        //Add your code here.
        if(K == 0){
            return null;
        }
        for(int i = 1 ; i < K ; i++){
            arr[0] = mergeTwoLists(arr[0], arr[i]);
        }
        return arr[0];
    }
}
