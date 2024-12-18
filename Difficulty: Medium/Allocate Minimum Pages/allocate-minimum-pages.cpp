//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool fun(vector<int>& arr, int k, long long mid){
        long long cnt = 1, sum = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] > mid) return 0;
            if(sum + arr[i] > mid){
                sum = arr[i];
                cnt++;
            }else{
                sum += arr[i];
            }
            if(cnt > k) return false;
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        if(arr.size() < k) return -1;
        long long lo = 0, hi = 0;
        for(auto it: arr){
            lo = max((long long) it, lo);
            hi += it;
        }
        int res = -1;
        while(lo <= hi){
            long long mid = lo + (hi - lo)/2;
            if(fun(arr, k, mid)){
                res = mid;
                hi = mid - 1;
            }else{
                lo = mid + 1;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends