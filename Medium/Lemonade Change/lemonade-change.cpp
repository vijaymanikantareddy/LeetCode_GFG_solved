//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        if(bills[0] != 5) return false;
        int five = 0, ten = 0;
        for(int ele: bills){
            if(ele == 5){
                five++;
            }
            else if(ele == 10){
                ten++;
                if(five == 0) return false;
                five--;
            }
            else if(ele == 20 and five>=1 and ten>=1){
                ten--;
                five--;
            }
            else if(ele == 20 and ten == 0 and five >=3){
                five -= 3;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends