class Solution {
public:
    bool isValid(string word) {
        if(word.size() < 3) return false;
        bool numbers = false, vowels = false, consonents = false;
        // int cnt = 0;
        for(char ch: word){
            if(ch >= '0' && ch <= '9'){
                numbers = true;
            }
            else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                    vowels = true;
                }else{
                    consonents = true;
                }
            }else{
                return false;
            }
        }
        // cout << numbers << " " << vowels << " " << consonents << endl;
        return (vowels && consonents);
    }
};