//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    void fun(string& nums) {
        int ind = -1;
        for(int i = nums.size()-2 ; i >= 0 ; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        if(ind == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i = nums.size()-1 ; i > ind ; i--){
            if(nums[i] > nums[ind]){
                swap(nums[i], nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1, nums.end());
    }
    string kthPermutation(int n, int k)
    {
        // code here
        string st = "";
        for(int i = 1; i <= n ; i++){
            st += to_string(i);
        }
        for(int i = 1 ; i < k ; i++){
            fun(st);
        }
        return st;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends