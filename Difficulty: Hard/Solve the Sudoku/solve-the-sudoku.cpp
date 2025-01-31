//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find a solved Sudoku.
     bool isValid(vector<vector<int>>& grid, int row, int col, int val){
        int N = grid.size();
        for(int i = 0 ; i < N ; i++){
            if(grid[i][col] == val || grid[row][i] == val){
                return false;
            }
        }
        row = row - (row%3);
        col = col - (col%3);
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                if(grid[row+i][col+j] == val){
                    return false;
                }
            }
        }
        return true;
    }
    bool fun(vector<vector<int>>& grid)  
    { 
        // Your code here
        int N = grid.size();
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < N ; j++){
                if(grid[i][j] == 0){
                    for(int val = 1 ; val <= N; val++){
                        if(isValid(grid, i, j, val)){
                            grid[i][j] = val;
                            if(fun(grid)){
                                return true;
                            }else{
                                grid[i][j] = 0;
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<int>> &mat) {
        // code here
        bool a = fun(mat);
    }
};

//{ Driver Code Starts.

vector<int> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    vector<int> res;
    while (ss >> num) {
        res.push_back(num);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<vector<int>> grid;
        for (int i = 0; i < 9; i++) {
            vector<int> v = inputLine();
            grid.push_back(v);
        }

        Solution ob;

        ob.solveSudoku(grid);

        for (auto v : grid) {
            for (auto elem : v) {
                cout << elem << " ";
            }
            cout << endl;
        }

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends