class Solution {
public:
    bool isAnagram(string s, string t) {
        int alphabets[26]={};
        for(int i=0 ; i<s.size() ; i++){
            int ind = s[i]-'a';
            alphabets[ind]++;
        }
        for(int i=0 ; i<t.size() ; i++){
            int ind = t[i]-'a';
            alphabets[ind]--;
        }
        for(int i=0 ; i<26 ; i++){
            if(alphabets[i]!=0)
                return false;
        }
        return true;
    }
};