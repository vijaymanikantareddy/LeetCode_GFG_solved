//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    unsigned int reverseBits(unsigned int n)
    {
        //code here
        unsigned int num = 0, t = n, cnt = 0;
        while(t){
            cnt++;
            t >>= 1;
        }
        int i = cnt-1;
        while(n > 0){
            if(n&1){
                num += (pow(2, i));
            }
            n >>= 1;
            i--;
        }
        return num;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout<< ob.reverseBits(N) <<"\n";
        
    }
    return 0;
}

// } Driver Code Ends