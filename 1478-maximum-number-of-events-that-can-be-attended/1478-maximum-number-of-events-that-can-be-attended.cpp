class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        int i = 0;
        int res = 0;
        int n = events.size();
        priority_queue<int, vector<int>, greater<>> pq;
        int day = 1;
        while(i < n || !pq.empty()){

            while(i < n && events[i][0] == day){
                pq.push(events[i][1]);
                i++;
            }

            while(!pq.empty() && pq.top() < day){
                pq.pop();
            }

            if(!pq.empty()){
                pq.pop();
                res++;
            }
            day++;
        }
        return res;
    }
};