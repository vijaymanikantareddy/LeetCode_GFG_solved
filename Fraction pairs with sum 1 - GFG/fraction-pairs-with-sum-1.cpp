//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int gcd(int a, int b){
		return b == 0? a: gcd(b, a%b);
	}
    int countFractions(int n, int num[], int den[])
    {
        int ans = 0;
        map<pair<int, int>, int> mp;
        for(int i = 0 ; i < n ; i++){
            int g = gcd(num[i], den[i]);
            num[i] /= g;
            den[i] /= g;
            
            int a = num[i];
            int b = den[i];
            int r = b-a;
            if(mp.find({r, b}) != mp.end()){
                ans += mp[{r, b}];
            }
            
            mp[{a, b}]++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends