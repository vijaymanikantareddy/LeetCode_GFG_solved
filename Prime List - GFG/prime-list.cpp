//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
    int near(vector<bool> primes, int n){
        int l = n-1, r = n+1, res = n;
        if(primes[n]){
            return res;
        }
        bool flag = true;
        while(flag){
            if(primes[l]){
                res = l;
                flag = false;
                break;
            }
            if(primes[r]){
                res = r;
                flag = false;
                break;
            }
            l--;
            r++;
        }
        return res;
    }
    Node *primeList(Node *head){
        vector<bool> primes(100000, true);
        primes[0] = primes[1] = false;
        for(int i = 2 ; i*i <= 100000 ; i++){
            if(primes[i]){
                for(int j = i*i ; j <= 100000 ; j+=i){
                    primes[j] = false;
                }
            }
        }
        Node * ptr = head;
        while(ptr != NULL){
            ptr->val = near(primes, ptr->val);
            ptr = ptr->next;
        }
        return head;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends