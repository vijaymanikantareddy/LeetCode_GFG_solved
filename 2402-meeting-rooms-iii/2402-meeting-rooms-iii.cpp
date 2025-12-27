class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        priority_queue<int, vector<int>, greater<>> fre;

        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> busy;

        vector<int> cnt(n, 0);

        for(int i = 0 ; i < n ; i++){
            fre.push(i);
        }

        sort(meetings.begin(), meetings.end(), 
            [](const vector<int>& a, const vector<int>& b){
                return a[0] < b[0];
            }
        );
        int mx = 0;
        for(int i = 0 ; i < meetings.size() ; i++){
            int st = meetings[i][0], en = meetings[i][1];
            while(!busy.empty() && busy.top().first <= st){
                fre.push(busy.top().second);
                busy.pop();
            }

            if(!fre.empty()){
                busy.push({en, fre.top()});
                cnt[fre.top()]++;
                mx = max(mx, cnt[fre.top()]);
                fre.pop();
            }else{
                // no rooms available then check when will the busy 
                // room gets empty
                pair<long long, int> earliest = busy.top();
                busy.pop();
                busy.push({earliest.first + en - st, earliest.second});
                cnt[earliest.second]++;
                mx = max(mx, cnt[earliest.second]);
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(cnt[i] == mx){
                return i;
            }
        }
        return 0;
    }
};