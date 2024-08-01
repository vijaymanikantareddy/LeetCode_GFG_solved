//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        vector<int> res;
        int r = matrix.size(), c = matrix[0].size();
        int top = 0, down = r-1, left = 0, right = c-1, dir = 0;
        while(top <= down && left <= right)
        {
            if(dir == 0){
                for(int i = left ; i <= right ; i++){
                    res.push_back(matrix[top][i]);
                }
                top += 1;
            }
            else if(dir == 1){
                for(int i = top ; i <= down ; i++){
                    res.push_back(matrix[i][right]);
                }
                right -= 1;
            }
            else if(dir == 2){
                for(int i = right ; i >= left ; i--){
                    res.push_back(matrix[down][i]);
                }
                down -= 1;
            }
            else if(dir == 3){
                for(int i = down ; i >= top ; i--){
                    res.push_back(matrix[i][left]);
                }
                left += 1;
            }
            dir = (dir+1)%4;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends