//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class Node{
    Node next;
    int val;
    public Node(int data){
        val=data;
        next=null;
    }
}

class Main
{
    public static void main(String args[])throws Exception
    {
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out=new PrintWriter(System.out);
        
        int t;
        t=Integer.parseInt(in.readLine());
        while(t-->0){
            int n;
            n=Integer.parseInt(in.readLine());
            Node head,tail;
            String s[]=in.readLine().trim().split(" ");
            int num=Integer.parseInt(s[0]);
            head=new Node(num);
            tail=head;
            for(int i=1;i<n;i++){
                num=Integer.parseInt(s[i]);
                tail.next=new Node(num);
                tail=tail.next;
            }
            Solution ob=new Solution();
            Node temp=ob.primeList(head);
            while(temp!=null){
                out.print(temp.val+" ");
                temp=temp.next;
            }
            out.println();
        }
        out.close();
    }
}
// } Driver Code Ends


//User function Template for Java
/*
class Node{
    Node next;
    int val;
    public Node(int data){
        val=data;
        next=null;
    }
}
*/

class Solution
{
    public static int near(boolean primes[], int n){
        boolean flag = true;
        if(primes[n]){
            return n;
        }
        int le = n - 1, ri = n+1, res = n;
        while(flag){
            if(primes[le]){
                res = le;
                flag = false;
                break;
            }
            if(primes[ri]){
                res = ri;
                flag = false;
                break;
            }
            le--;
            ri++;
        }
        return res;
    }
    Node primeList(Node head){
        //code here
        Node temp = head;
        boolean primes[] = new boolean[100001];
        Arrays.fill(primes, true);
        primes[0] = primes[1] = false;
        for(int i = 2 ; i*i <= 100000 ; i++){
            if(primes[i]){
                for(int j = i*i ; j <= 100000 ; j+=i){
                    primes[j] = false;
                }
            }
        }
        
        while(temp != null){
            temp.val = near(primes, temp.val);
            temp = temp.next;
        }
        return head;
    }
}