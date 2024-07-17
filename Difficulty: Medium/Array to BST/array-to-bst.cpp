//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void fun(vector<int>& nums, vector<int>& res, int st, int en){
        if(st > en) return ;
        int mid = st + (en - st)/2;
        res.push_back(nums[mid]);
        fun(nums, res, st, mid-1);
        fun(nums, res, mid+1, en);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> res;
        fun(nums, res, 0, nums.size()-1);
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution obj;
        vector<int> ans = obj.sortedArrayToBST(nums);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends