//{ Driver Code Starts
// here

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        unordered_map<int, int> mp;
        unordered_map<int, int> temp;
        vector<int> res;
        for(auto it: arr1){
            if(mp.find(it) == mp.end()) mp[it]++;
        }
        for(auto it: mp) temp[it.first]++;
        mp.clear();
        for(auto it: arr2){
            if(mp.find(it) == mp.end()) mp[it]++;
        }
        for(auto it: mp) temp[it.first]++;
        mp.clear();
        for(auto it: arr3){
            if(mp.find(it) == mp.end()) mp[it]++;
        }
        for(auto it: mp) temp[it.first]++;
        for(auto it: temp){
            if(it.second == 3) res.push_back(it.first);
        }
        sort(res.begin(), res.end());
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3) {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl << "~\n";
    }
}
// } Driver Code Ends