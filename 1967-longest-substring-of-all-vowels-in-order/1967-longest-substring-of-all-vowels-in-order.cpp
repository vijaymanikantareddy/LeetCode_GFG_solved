class Solution {
public:
    int fun(char ch){
        if(ch == 'a') return 1;
        if(ch == 'e') return 2;
        if(ch == 'i') return 3;
        if(ch == 'o') return 4;
        return 5;
    }
   
    int longestBeautifulSubstring(string word) {
        int i = 0, j = 0;
        int res = 0;
        map<char, int> mp;
        while(i < word.size()){
            if(word[i] == 'a'){
                j = i + 1;
                mp.clear();
                int cur = fun(word[i]);
                mp[word[i]]++;
                while(j < word.size() && fun(word[j]) >= cur){
                    cur = fun(word[j]);
                    mp[word[j]]++;
                    j++;
                }
                if(mp.size() == 5){
                    res = max(res, j - i);
                }
                i = j;
            }else{
                i++;
            }
        }
        return res;
    }
};