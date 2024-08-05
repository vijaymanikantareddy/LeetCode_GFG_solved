class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for(string st: arr){
            mp[st]++;
        }
        int cnt = 0;
        for(string st: arr){
            if(mp[st] == 1){
                cnt++;
                if(cnt == k){
                    return st;
                }
            }
        }
        return "";
    }
};