//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int i = 0, j = arr.size()-1;
        while(i < j){
            if(arr[i] == 0 && arr[j] == 0){
                i++;
            }else if(arr[i] == 0 && arr[j] == 1){
                i++;
                j--;
            }else if(arr[i] == 1 && arr[j] == 0){
                swap(arr[i], arr[j]);
                i++;
                j--;
            }else{
                j--;
            }
        }
        return ;
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
        int n = arr.size();
        Solution ob;
        ob.segregate0and1(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends