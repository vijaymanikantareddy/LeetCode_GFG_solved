//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

// User function Template for C++

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

class Solution {
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
    Node *primeList(Node *head) {
        // code here
        vector<bool> primes(100001, true);
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

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        head = ob.primeList(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends