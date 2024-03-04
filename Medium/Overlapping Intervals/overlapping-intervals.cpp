//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        int i = 0;
        while(i < intervals.size()){
            int a = intervals[i][0];
            int b = intervals[i][1];
            int j = i+1;
            while(j < intervals.size() && intervals[j][0] <= b){
                a = min(a, intervals[j][0]);
                b = max(b, intervals[j][1]);
                j++;
                i++;
            }
            res.push_back({a, b});
            i++;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends