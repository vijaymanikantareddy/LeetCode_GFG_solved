//User function Template for C++

class Solution{
    public:
    bool check(vector<int> a, vector<int> b){
        if(a.size() != b.size()) return false;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i = 0 ; i < a.size(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
    vector<vector<int>> levelOrder(Node *root){
        vector<vector<int>> res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int n = q.size();
            for(int i = 0 ; i < n ; i++){
                Node* ft = q.front();
                if(ft->left){
                    q.push(ft->left);
                }
                if(ft->right){
                    q.push(ft->right);
                }
                temp.push_back(ft->data);
                q.pop();
            }
            res.push_back(temp);
        }
        return res;
    }
    bool areAnagrams(Node *root1, Node *root2)
    {
        if(root1 == NULL and root2 == NULL) return true;
        vector<vector<int>> a = levelOrder(root1);
        vector<vector<int>> b = levelOrder(root2);
        if(a.size() != b.size()) return false;
        for(int i = 0 ; i < a.size() ; i++){
            if(check(a[i], b[i]) == false) return false;
        }
        return true;
    }
};
