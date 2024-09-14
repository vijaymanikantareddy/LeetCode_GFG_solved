//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int> v;
        int ne = arr.size(), po = arr.size();
        for(int i = arr.size()-1 ; i >= 0 ; i--){
            if(arr[i] < 0){
                ne = i;
            }else{
                po = i;
            }
        }
        int i = 0;
        while(i < arr.size()){
            if(po < arr.size()){
                v.push_back(arr[po]);
                i++;
                po++;
                while(po < arr.size() && arr[po] < 0){
                    po++;
                }
            }
            if(ne < arr.size()){
                v.push_back(arr[ne]);
                i++;
                ne++;
                while(ne < arr.size() && arr[ne] >= 0){
                    ne++;
                }
            }
        }
        arr = v;
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends