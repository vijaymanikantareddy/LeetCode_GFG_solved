//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
        // code here
        stack<char> st;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ']'){
                string temp = "";
                while(st.top() != '['){
                    temp += st.top();
                    st.pop();
                }
                reverse(temp.begin(), temp.end());
                st.pop();
                string snum = "";
                while(!st.empty() && st.top() >= '0' && st.top() <= '9'){
                    snum += st.top();
                    st.pop();
                }
                reverse(snum.begin(), snum.end());
                int num = stoi(snum);
                for(int i = 0 ; i < num ; i++){
                    for(int j = 0 ; j < temp.size() ; j++){
                        st.push(temp[j]);
                    }
                }
            }else{
                st.push(s[i]);
            }
        }
        string res = "";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends