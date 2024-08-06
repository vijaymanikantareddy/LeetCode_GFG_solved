//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool fun(string a, string b){
        int cnt = 0;
        for(int i = 0 ; i < a.size() ; i++){
            if(a[i] != b[i]){
                cnt++;
            }
        }
        return (cnt == 1);
    }
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        if(startWord == targetWord) return 0;
        unordered_set<string> vis;
        queue<pair<int, string>> pq;
        pq.push({1, startWord});
        vis.insert(startWord);
        while(!pq.empty()){
            int cost = pq.front().first;
            string word = pq.front().second;
            // cout << word << " " << cost << endl;
            pq.pop();
            if(word == targetWord){
                return cost;
            }
            for(auto it: wordList){
                if(vis.find(it) == vis.end() && fun(word, it)){
                    vis.insert(it);
                    pq.push({cost+1, it});
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends