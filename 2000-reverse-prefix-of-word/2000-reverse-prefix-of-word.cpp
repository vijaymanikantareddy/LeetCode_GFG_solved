class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind=0;
        bool b = true;
        string res;
        for(int i=0 ; i<word.size() ; i++){
            res+= word[i];
            if(word[i]==ch){
                ind = i;
                b = false;
                break;
            }
        }
        if(b) return word;
        reverse(res.begin(), res.end());
        for(int i=ind+1 ; i<word.size() ; i++){
            res+= word[i];
        }
        return res;
    }
};