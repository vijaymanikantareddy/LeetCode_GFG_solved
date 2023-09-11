//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverse(struct Node* head){
        struct Node* pre = NULL, *ptr = head, * ne;
        while(ptr != NULL){
            ne = ptr->next;
            ptr->next = pre;
            pre = ptr;
            ptr = ne;
        }
        return pre;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverse(first);
        second = reverse(second);
        struct Node* result = new Node(-1);
        struct Node* a = first, *b = second, *ptr = result;
        int c = 0;
        while(a && b){
            int av = a->data;
            int bv = b->data;
            int s = av + bv + c;
            c = s/10;
            s = s%10;
            ptr->next = new Node(s);
            ptr = ptr->next;
            a = a->next;
            b = b->next;
        }
        while(a){
            int s = a->data + c;
            c = s/10;
            s = s%10;
            ptr->next = new Node(s);
            ptr = ptr->next;
            a = a->next;
        }
        while(b){
            int s = b->data + c;
            c = s/10;
            s = s%10;
            ptr->next = new Node(s);
            ptr = ptr->next;
            b = b->next;
        }
        if(c){
            ptr->next = new Node(c);
            ptr = ptr->next;
        }
        return reverse(result->next);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends