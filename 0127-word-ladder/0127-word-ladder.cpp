class Solution {
public:
    bool fun(string a, string b){
        int cnt = 0;
        for(int i = 0 ; i < a.size() ; i++){
            if(a[i] != b[i]){
                cnt++;
            }
            if(cnt > 1) return false;
        }
        return (cnt <= 1);
    }
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n = wordList.size();
        bool flag = true;
        for(auto it: wordList) if(it == endWord) flag = false;
        if(flag) return 0;

        unordered_map<string, int> vis;
        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        vis[beginWord]++;
        while(!q.empty()){
            string s = q.front().first;
            int cnt = q.front().second;
            if(s == endWord) return cnt;
            q.pop();
            for(int i = 0 ; i < n ; i++){
                if(vis.find(wordList[i]) != vis.end()) continue;
                if(fun(s, wordList[i])){
                    q.push({wordList[i], cnt + 1});
                    vis[wordList[i]]++;
                }
            }
        }
        return 0;
    }
};