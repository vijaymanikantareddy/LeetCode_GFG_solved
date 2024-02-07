class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(char ch: s){
            mp[ch]++;
        }
        vector<pair<int, char>> vi;
        for(auto it: mp){
            vi.push_back({it.second, it.first});        
        } 
        sort(vi.rbegin(), vi.rend());
        string res = "";
        for(auto it: vi){
            for(int i = 0 ; i < it.first ; i++){
                res += it.second;
            }
        }
        return res;
    }
};