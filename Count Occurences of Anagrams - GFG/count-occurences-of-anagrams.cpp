//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    bool issim(vector<int>& fre, vector<int> mp){
        for(int i = 0 ; i < 26 ; i++){
            if(mp[i] != fre[i]){
                return false;
            }
        }
        return true;
    }
	int search(string pat, string txt) {
	    // code here
	    int res = 0;
	    vector<int> mp(26, 0);
	    for(int i = 0 ; i < pat.size() ; i++){
	        int d = pat[i]-'a';
	        mp[d]++;
	    }
	    vector<int> fre(26, 0);
	    int psize = pat.size();
	    for(int i = 0 ; i < psize ; i++){
	        fre[txt[i]-'a']++;
	    }
	    if(issim(fre, mp)){
	        res++;
	    }
	    for(int i = psize ; i < txt.size(); i++){
	        fre[txt[i-psize] - 'a']--;
	        fre[txt[i] - 'a']++;
	        if(issim(fre, mp)){
	            res++;
	        }
	    }
	    return res;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends