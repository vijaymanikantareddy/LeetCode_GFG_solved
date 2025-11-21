class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag = true;
        for(char ch: word){
            if((ch >= 'A' and ch <= 'Z') == false){
                flag = false;
                break;
            }
        }
        if(flag) return true;

        flag = true;
        for(char ch: word){
            if((ch >= 'a' and ch <= 'z') == false){
                flag = false;
                break;
            }
        }
        if(flag) return true;

        flag = (word[0] >= 'A' && word[0] <= 'Z');
        for(int i = 1 ; i < word.size() ; i++){
            if((word[i] >= 'a' && word[i] <= 'z') == false){
                return false;
            }
        }
        return flag;
    }
};