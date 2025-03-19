//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int mostBooked(int n, vector<vector<int>> &meetings) {
        // code here
        // pq to store freeRooms
        priority_queue<int, vector<int>, greater<>> fre;
        // pq to store busy rooms with {endTime, roomNumber}
        priority_queue<pair<int, int>, 
            vector<pair<int, int>>, greater<>> busy;
        // to count the number of times we used the room.
        vector<int> cnt(n, 0);
        
        // Rooms are free before meetings
        for(int i = 0 ; i < n ; i++){
            fre.push(i);
        }
        // Sort the rooms based on the start time
        sort(meetings.begin(), meetings.end(), 
            [](const vector<int> &a, const vector<int>& b){
                return a[0] < b[0];
            });
            
        int mx = 0;
        
        for(int i = 0 ; i < meetings.size(); i++){
            int st = meetings[i][0], en = meetings[i][1];
            // check whether the busy rooms are getting free
            while(!busy.empty() && busy.top().first <= st){
                fre.push(busy.top().second);
                busy.pop();
            }
            // if free room is there, utilize it
            if(!fre.empty()){
                busy.push({en, fre.top()});
                cnt[fre.top()]++;
                mx = max(mx, cnt[fre.top()]);
                fre.pop();
            }else{
                // no rooms available then check when will the busy 
                // room gets empty
                pair<int, int> earliest = busy.top();
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


//{ Driver Code Starts.

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> m;
        vector<vector<int>> meetings(m, vector<int>(2));
        for (int i = 0; i < m; i++) {
            cin >> meetings[i][0] >> meetings[i][1];
        }
        Solution ob;
        cout << ob.mostBooked(n, meetings) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends