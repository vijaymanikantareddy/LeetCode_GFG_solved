class Solution {
  public:
    int countValid(int n, vector<int>& arr) {
        // code here
        int total = 9 * pow(10, n - 1);
        set<int> se(arr.begin(), arr.end());
        
        int notInArr = 10 - se.size();
        
        int firstDigit = notInArr;
        
        if(se.find(0) == se.end()){
            firstDigit--;
        }
        
        int notUsed = firstDigit * pow(notInArr, n - 1);
        // cout << notInArr << " " << notUsed << " ";
        return total - notUsed;
    }
};
