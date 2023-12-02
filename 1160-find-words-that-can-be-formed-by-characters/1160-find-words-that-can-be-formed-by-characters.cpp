class Solution {
public:
    bool fun(string word, map<char, int> mp){
        map<char, int> wm;
        for(auto ch: word) wm[ch]++;
        for(auto it: wm){
            if(mp.find(it.first) == mp.end()){
                return false;
            }
            if(it.second > mp[it.first]){
                return false;
            }
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        map<char, int> mp;
        int res = 0;
        for(char ch: chars){
            mp[ch]++;
        }
        for(string word: words){
            if(fun(word, mp)){
                res += word.size();
            }
        }
        return res;
    }
};