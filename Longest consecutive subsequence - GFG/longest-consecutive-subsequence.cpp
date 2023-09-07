//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int cnt = 1;
      map<int, int> mp;
      for(int i = 0 ; i < N ; i++){
          mp[arr[i]]++;
      }
      int mx = 1;
      for(auto it: mp){
          if(mp.find(it.first+1) != mp.end()){
              cnt++;
          }else{
              cnt = 1;
          } 
          mx = max(cnt, mx);
      }
      return mx;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends