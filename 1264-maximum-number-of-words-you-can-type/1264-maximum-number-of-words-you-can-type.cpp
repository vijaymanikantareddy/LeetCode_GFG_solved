class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        set<char> se(brokenLetters.begin(), brokenLetters.end());
        int res = 0;
        stringstream ss(text);
        string word;
        while(ss >> word){
            string s = word;
            bool flag = true;
            for(auto it: s){
                if(se.find(it) != se.end()){
                    flag = false;
                    break;
                }
            }
            if(flag) res++;
        }
        return res;
    }
};