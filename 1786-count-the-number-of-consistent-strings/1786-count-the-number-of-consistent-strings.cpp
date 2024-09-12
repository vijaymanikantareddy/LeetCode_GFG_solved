class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int>mp;
        for(char i: allowed)
            mp[i]++;
        int cnt = words.size();
        for(string s: words){
            bool set = false;
            for(char i: s){
                if(mp[i]==0){
                    set = true;
                    break;
                }
            }
            if(set) cnt--;
        }
        return cnt;
    }
};