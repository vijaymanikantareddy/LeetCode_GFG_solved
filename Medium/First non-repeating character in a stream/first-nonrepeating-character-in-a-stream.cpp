//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    map<char, int> mp;
		    queue<char> q;
		    string ans = "";
		    for(char ch: A){
		        if(mp.find(ch) == mp.end()){
		            mp[ch]++;
		            q.push(ch);
		        }else{
		            mp[ch]++;
		            while(!q.empty() && mp[q.front()] != 1){
		                q.pop();
		            }
		        }
		        
		        ans += q.size()? q.front(): '#';
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends