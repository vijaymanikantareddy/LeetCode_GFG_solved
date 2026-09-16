/* Binary Tree Node Structure
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int getCount(Node *root, int k) {
        // code here
        vector<int> v;
        queue<Node*> q;
        q.push(root);
        int cnt = 1;
        while(!q.empty()){
            int s = q.size();
            for(int i = 0 ; i < s ; i++){
                Node* t = q.front();
                q.pop();
                if(t->left || t->right){
                    if(t->left){
                        q.push(t->left);
                    }
                    if(t->right){
                        q.push(t->right);
                    }
                }else{
                    v.push_back(cnt);
                }
            }
            cnt++;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        int ind = 0;
        while(k > 0 && ind < v.size()){
            if(v[ind] <= k){
                ans++;
                k -= v[ind];
            }
            ind++;
        }
        return ans;
    }
};