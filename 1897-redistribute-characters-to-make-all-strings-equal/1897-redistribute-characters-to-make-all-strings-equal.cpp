class Solution {
public:
    bool makeEqual(vector<string>& words) {
        if(words.size() == 1) return true;
        unordered_map<char, int> mp;
        for(string word: words){
            for(char i: word){
                mp[i]++;
            }
        }
        
        int n = words.size();
        for(auto it: mp){
            if((it.second%n != 0) || (it.second == 1 && words.size() != 1)) return false;
        }
        return true;
    }
};