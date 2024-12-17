class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        string res = "";
        priority_queue<char> pq;
        unordered_map<char, int> mp;
        for(auto it: s) mp[it]++;
        for(auto it: mp) pq.push(it.first);
        while(!pq.empty()){
            char ch = pq.top();
            pq.pop();
            int cnt = mp[ch];
            int mn = min(cnt, repeatLimit);
            res.append(mn, ch);
            mp[ch] -= mn;
            if(mp[ch] > 0 && !pq.empty()){
                char ne = pq.top();
                pq.pop();
                res.push_back(ne);
                mp[ne]--;
                if(mp[ne] > 0){
                    pq.push(ne);
                }
                pq.push(ch);
            }
        }
        return res;
    }
};