//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int fun(int num, unordered_map<int, int> mp){
        for(int i = 2 ; i*i <= num ; i++){
            if(num%i == 0 && (mp.find(i) != mp.end() || mp.find(num/i) != mp.end())){
                return 1;
            }
        }
        return 0;
    }
    
    int countSpecialNumbers(int N, vector<int> arr) {
        // Code here
        int res = 0;
        unordered_map<int, int> mp;
        for(int i = 0 ; i < N ; i++){
            mp[arr[i]]++;
        }
        bool havingOne = (mp.find(1) != mp.end());
        for(auto it: mp){
            if(it.second > 1){
                res += it.second;
            }else if(havingOne){
                if(it.first == 1 && mp[1] > 1){
                    res++;
                }
                else if(it.first != 1){
                    res++;
                }
            }
            else {
                res += fun(it.first, mp);
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends