class Solution {
  public:
    vector<string> res;
    void fun(unordered_map<int, string>& mp, vector<int>& arr, int n, 
    int start, string temp){
        if(start == n){
            res.push_back(temp);
            return;
        }
        if(arr[start] == 0 or arr[start] == 1){
            fun(mp, arr, n, start + 1, temp);
            return ;
        }
        string s = mp[arr[start]];
        for(int i = 0 ; i < s.size() ; i++){
            temp.push_back(s[i]);
            fun(mp, arr, n, start + 1, temp);
            temp.pop_back();
        }
    }
    vector<string> possibleWords(vector<int> &arr) {
        // code here
        unordered_map<int, string> mp;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        int n = arr.size();
        string temp;
        fun(mp, arr, n, 0, temp);
        return res;
    }
};