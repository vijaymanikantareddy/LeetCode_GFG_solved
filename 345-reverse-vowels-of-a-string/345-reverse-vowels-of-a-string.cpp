class Solution {
public:
    bool isvow(char c){
        if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='A' or c=='E' or c=='I' or c=='O' or c=='U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        vector<char> vow;
        for(char i: s){
            if(isvow(i))
                vow.push_back(i);
        }
        int v=vow.size()-1;
        for(int i=0 ; i<s.size() ; i++){
            if(isvow(s[i])){
                s[i]=vow[v];
                v--;
            }
        }
        return s;
    }
};