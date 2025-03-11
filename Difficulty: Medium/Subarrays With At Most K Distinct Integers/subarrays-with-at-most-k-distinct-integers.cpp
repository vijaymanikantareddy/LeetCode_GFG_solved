//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int atMostK(vector<int> &arr, int k) {
        // code here
        map<int, int> mp;
        int i = 0, j = 0;
        int n = arr.size();
        int res = 0;
        while(j < n){
            mp[arr[j]]++;
            while(i < j && mp.size() > k){
                mp[arr[i]]--;
                if(mp[arr[i]] == 0){
                    mp.erase(arr[i]);
                }
                i++;
            }
            res += j - i + 1;
            j++;
        }
        return res;
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
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution obj;
        cout << obj.atMostK(arr, k) << endl;
    }
    return 0;
}
// } Driver Code Ends