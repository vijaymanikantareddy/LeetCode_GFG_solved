//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findposition(vector<int> arr, int num){
        int i = 0, j = arr.size()-1;
        while(i < j){
            int mid = i + (j-i)/2;
            if(arr[mid] == num) return mid;
            else if(arr[mid] < num){
                i = mid+1;
            }else{
                j = mid;
            }
        }
        return i;
    }
    int lis(vector<int>& arr) {
        // code here
        vector<int> v;
        v.push_back(arr[0]);
        for(int i = 1 ; i < arr.size() ; i++){
            if(v.back() >= arr[i]){
                int ind = findposition(v, arr[i]);
                v[ind] = arr[i];
            }else{
                v.push_back(arr[i]);
            }
        }
        return v.size();
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input

    while (t--) {
        int n;
        vector<int> arr;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        cout << obj.lis(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends