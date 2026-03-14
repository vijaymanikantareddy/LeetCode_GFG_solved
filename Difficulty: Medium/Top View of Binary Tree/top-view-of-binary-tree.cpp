/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int> res;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        map<int, int> mp;
        mp[0] = root->data;
        int le = 0, mx = 0, mi = 0;
        while(!q.empty()){
            Node* t = q.front().first;
            int a = q.front().second;
            q.pop();
            if(mp.find(a) == mp.end()){
                mp[a] = t->data;
            }
            mi = mi < a? mi: a;
            mx = mx > a? mx: a;
            if(t->left){
                q.push({t->left, a-1});
            }
            if(t->right){
                q.push({t->right, a+1});
            }
        }
        
        for(int i = mi ; i <= mx ; i++){
            res.push_back(mp[i]);
        }
        return res;
    }
};