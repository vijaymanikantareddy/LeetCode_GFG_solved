class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mm, rm;
        for(char it: magazine)
            mm[it]++;
        for(char it: ransomNote)
            rm[it]++;
        for(auto it: rm){
            if(mm[it.first]<it.second){
                return false;
            }
        }
        return true;
    }
};