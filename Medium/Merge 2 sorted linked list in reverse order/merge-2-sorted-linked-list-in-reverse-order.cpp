//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    struct Node* reverse(Node* root){
        if(root == NULL) return NULL;
        struct Node* pre = NULL, *curr = root;
        while(curr != NULL){
            struct Node* ne = curr->next;
            curr->next = pre;
            pre = curr;
            curr = ne;
        }
        return pre;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        if(node1 == NULL) return reverse(node2);
        if(node2 == NULL) return reverse(node1);
        struct Node* ans = new Node();
        struct Node* a = node1, *b = node2, *res = ans;
        while(a != NULL and b != NULL){
            if(a->data < b->data){
                struct Node* newnode = new Node();
                newnode->data = a->data;
                newnode->next = NULL;
                res->next = newnode;
                res = res->next;
                a = a->next;
            }else{
                struct Node* newnode = new  Node();
                newnode->data = b->data;
                newnode->next = NULL;
                res->next = newnode;
                res = res->next;
                b = b->next;
            }
        }
        if(a == NULL){
            res->next = b;
        }
        if(b == NULL) res->next = a;
        return reverse(ans->next);
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends