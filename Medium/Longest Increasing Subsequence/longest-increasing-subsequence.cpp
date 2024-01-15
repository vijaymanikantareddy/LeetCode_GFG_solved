//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    int findposition(vector<int> arr, int num){
        int i = 0, j = arr.size()-1;
        while(i < j){
            int mid = i + (j-i)/2;
            if(arr[mid] == num) return mid;
            else if(arr[mid] < num){
                i = mid+1;
            }else{
                j = mid;
            }
        }
        return i;
    }
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int> v;
       v.push_back(a[0]);
       for(int i = 1 ; i < n ; i++){
           if(v.back() >= a[i]){
               int ind = findposition(v, a[i]);
               v[ind] = a[i];
           }else{
               v.push_back(a[i]);
           }
       }
       return v.size();
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends