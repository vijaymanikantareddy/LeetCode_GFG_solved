//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int evaluate(vector<string>& arr) {
        // code here
        stack<string> st;
        for(auto it: arr){
            if(it == "+" || it == "-" || it == "*" || it == "/"){
                int b = stoi(st.top());
                st.pop();
                int a = stoi(st.top());
                st.pop();
                
                if(it == "+"){
                    int c = a + b;
                    st.push(to_string(c));
                }else if(it == "-"){
                    int c = a - b;
                    st.push(to_string(c));
                }else if(it == "*"){
                    int c = a*b;
                    st.push(to_string(c));
                }else{
                    int c = a/b;
                    st.push(to_string(c));
                }
            }else{
                st.push(it);
            }
        }
        return stoi(st.top());
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends