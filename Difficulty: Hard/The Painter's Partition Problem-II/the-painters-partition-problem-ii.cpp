//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int fun(vector<int>& arr, int givenTime){
        int t = 0, cnt = 1;
        for(int i = 0 ; i < arr.size() ; i++){
            if(t + arr[i] <= givenTime){
                t += arr[i];
            }else{
                cnt++;
                t = arr[i];
            }
        }
        return cnt;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        // return minimum time
        int low = 0, high = 0;
        for(int a: arr) {
            low = max(low, a);
            high += a;
        }
        while(low <= high){
            int mid = low + (high - low)/2;
            if(fun(arr, mid) <= k){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution obj;
        cout << obj.minTime(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends