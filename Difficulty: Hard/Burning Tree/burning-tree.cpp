//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    void inorder(Node* root, unordered_map<int, set<int>>& adj){
        if(root == NULL){
            return ;
        }
        if(root->left){
            adj[root->data].insert(root->left->data);
            adj[root->left->data].insert(root->data);
            inorder(root->left, adj);
        }
        if(root->right){
            adj[root->data].insert(root->right->data);
            adj[root->right->data].insert(root->data);
            inorder(root->right, adj);
        }
        
    }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        unordered_map<int, set<int>> adj;
        inorder(root, adj);
        priority_queue<pair<int, int>> pq;
        pq.push({target, 0});
        int res = 0;
        unordered_set<int> vis;
        vis.insert(target);
        while(!pq.empty()){
            int a = pq.top().first;
            int b = pq.top().second;
            res = max(res, b);
            pq.pop();
            for(auto it: adj[a]){
                if(vis.find(it) == vis.end()){
                    pq.push({it, b+1});
                    vis.insert(it);
                }
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends