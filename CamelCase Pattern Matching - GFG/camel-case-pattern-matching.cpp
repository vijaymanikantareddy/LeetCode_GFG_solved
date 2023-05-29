//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool fun(string word, vector<int> fre, string pat){
        int iter = 0;
        int le = pat.size();
        for(int i = 0 ; i < word.size() ; i++){
            if(iter >= le){
                return true;
            }
            if(isupper(word[i])){
                if(word[i] != pat[iter]){
                    return false;
                }
                int d = word[i]-'A';
                if(fre[d]>0){
                    iter++;
                    fre[d]--;
                }
            }
        }
        return false;
    }
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<int> pve(26, 0);
        for(auto it: Pattern){
            int d = it - 'A';
            pve[d]++;
        }
        vector<string> res;
        for(string word: Dictionary){
            if(fun(word, pve, Pattern)){
                res.push_back(word);
            }
        }
        if(res.empty()){
            res.push_back("-1");
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends