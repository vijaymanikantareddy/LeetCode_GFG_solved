class Solution {
  public:
    static bool cmp(string a, string b){
        if(a.size() != b.size()) return a.size() < b.size();
        return a > b;
    }
    string longestString(vector<string> &arr) {
        // code here
        sort(arr.begin(), arr.end(), cmp);
        unordered_map<string, int> mp;
        for(auto it: arr) mp[it]++;
        for(int i = arr.size() - 1; i >= 0 ; i--){
            int l = arr[i].size();
            bool flag = true;
            string word = "";
            for(int j = 0 ; j < l ; j++){
                word.push_back(arr[i][j]);
                if(mp[word] == 0){
                    flag = false;
                    break;
                }
            }
            if(flag) return arr[i];
        }
        return "";
    }
};