//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        vector<string> v(4, "");
        int i = 0, j = 0;
        string s = "";
        while(i < str.size()){
            if(str[i] == ' '){
                i++;
                continue;
            }
            if(str[i] >= '0' && str[i] <= '9'){
                s += str[i];
            }
            else if(str[i] == '/' or str[i] == ','){
                v[j] = s;
                j++;
                s = "";
            }
            i++;
        }
        v[j] = s;
        double a = stof(v[0])/stof(v[1]);
        double b = stof(v[2])/stof(v[3]);
        if(a == b){
            return "equal";
        }else if(a > b){
            return v[0]+"/"+v[1];
        }else{
            return v[2]+"/"+v[3];
        }
        // cout << a << endl;
        // for(auto it: v) cout << it << " ";
        // return str;
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends