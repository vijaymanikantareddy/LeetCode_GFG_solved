//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
class Solution{
    public:
    int countChars(string s1, string s2){
        
        // Your code here
        vector<int> vc(26, 0);
        for(char ch: s1){
            int d = ch - 'a';
            vc[d]++;
        }
        for(char ch: s2){
            int d = ch - 'a';
            vc[d]--;
        }
        int res = 0;
        for(int i = 0 ; i < 26 ; i++){
            res += abs(vc[i]);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    
	    // taking string input
	    string s1, s2;
	    cin >> s1 >> s2;
	    Solution obj;
	    cout << obj.countChars(s1, s2) << endl;
	}
	
	return 0;
}
// } Driver Code Ends