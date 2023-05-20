class Solution {
public:
    void permutations(vector<string>& all, string& temp, string s, vector<int>& vis, int & cnt, int k){
        if(temp.size() == s.size()){
            all.push_back(temp);
            cnt++;
            if(cnt == k){
                return;
            }
        }
        for(int i = 0 ; i < s.size() ; i++){
            if(!vis[i]){
                vis[i] = 1;
                temp.push_back(s[i]);
                permutations(all, temp, s, vis, cnt, k);
                temp.pop_back();
                vis[i] = 0;
            }
            if(cnt == k){
                return;
            }
        }
    }
    string getPermutation(int n, int k) {
        vector<int> vis(n, 0);
        string s = "";
        for(int i = 1 ; i <= n ; i++){
            s += to_string(i);
        }
        vector<string> all;
        string temp = "";
        int cnt = 0;
        permutations(all, temp, s, vis, cnt, k);
        return all[cnt-1];
    }
};