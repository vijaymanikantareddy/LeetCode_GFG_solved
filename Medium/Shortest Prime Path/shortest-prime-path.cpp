//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    bool isprime(int n)
    {
        if(n <= 1) return false;
        for(int i = 2 ; i*i <= n ;i++){
            if(n%i == 0) return false;
        }
        return true;
    }
    int shortestPath(int Num1,int Num2)
    {   
        // Complete this function using prime vector
        queue<pair<string, int>> q;
        if(Num1 == Num2) return 0;
        string a = to_string(Num1);
        string b = to_string(Num2);
        unordered_set<string> vis;
        vis.insert(a);
        q.push({a, 0});
        while(!q.empty()){
            string s = q.front().first;
            int steps = q.front().second;
            if(s == b) return steps;
            q.pop();
            for(int i = 0 ; i < 4 ; i++){
                for(char j = '0' ; j <= '9' ; j++){
                    if(i == 0 && j == '0') continue;
                    char ch = s[i];
                    s[i] = j;
                    int number = stoi(s);
                    if(isprime(number) && vis.find(s) == vis.end()){
                        q.push({s, steps+1});
                        vis.insert(s);
                    }
                    s[i] = ch;
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    Solution obj;
    while(t--)
    {
        int Num1,Num2;
        cin>>Num1>>Num2;
        int answer=obj.shortestPath(Num1,Num2);
        cout<<answer<<endl;
    }
}
// } Driver Code Ends