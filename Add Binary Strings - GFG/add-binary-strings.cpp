//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    // your code here
	    string res = "";
        int c = 0, s = 0;
        int i = A.size()-1, j = B.size()-1;
        while((i >= 0 && j >= 0)){
            int a = A[i--]-'0';
            int b = B[j--]-'0';
            s = (a+b+c)%2;
            c = (a+b+c)/2;
            char ch = (s+'0');
            res.push_back(ch);
        }
        
        while(i >= 0){
            int a = A[i--]-'0';
            s = (a+c)%2;
            c = (a+c)/2;
            char ch = (s+'0');
            res.push_back(ch);
        }
        while(j >= 0){
            int a = B[j--]-'0';
            s = (a+c)%2;
            c = (a+c)/2;
            char ch = (s+'0');
            res.push_back(ch);
        }
        if(c){
            res.push_back('1');
        }
        reverse(res.begin(), res.end());
        i = 0;
        bool flag = false;
        while(res[i] == '0'){
            i++;
            flag = true;
        }
        if(flag){
            if(i == res.size()){
                res.erase(0, i-1);
            }else{
                res.erase(0, i);
            }
        }
        return res;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends