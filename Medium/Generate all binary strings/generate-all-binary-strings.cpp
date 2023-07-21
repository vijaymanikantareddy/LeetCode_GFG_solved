//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void fun(int n, int le){
        int temp = n;
        string s = "";
        int pb = (n&1);
        n >>= 1;
        if(pb) s += '1';
        else s += '0';
        while(n > 0){
            if((n&1) == 1){
                s += '1';
                if(pb == 1){
                    return;
                }
                pb = 1;
            }else{
                s += '0';
                pb = 0;
            }
            n >>= 1;
        }
        while(s.size() < le){
            s += '0';
        }
        reverse(s.begin(), s.end());
        cout<<s<<" ";
    }
    void generateBinaryStrings(int num){
        //Write your code
        int cnt = pow(2, num);
        for(int i = 0 ; i < cnt ; i++){
            fun(i, num);
        }
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends