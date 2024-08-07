//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int res, i = 0, j = 0;
        int n = arr1.size(), m = arr2.size();
        while(i < n && j < m && k != 0){
            if(arr1[i] < arr2[j]){
                res = arr1[i];
                i++;
            }
            else{
                res = arr2[j];
                j++;
            }
            k--;
        }
        while(i < n && k != 0){
            res = arr1[i];
            i++;
            k--;
        }
        while(j < m && k != 0){
            res = arr2[j];
            j++;
            k--;
        }
        return res;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends