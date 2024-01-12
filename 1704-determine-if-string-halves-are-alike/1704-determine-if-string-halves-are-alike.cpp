class Solution {
public:
    bool vow(char a){
        if(a=='a' or a=='e' or a == 'i' or a == 'o' or a =='u' or a=='A' or a=='E' or a=='I' or a=='O' or a == 'U'){
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int a=0, b=0;
        for(int i = 0 ; i < s.size()/2 ; i++){
            if(vow(s[i])){
                a++;
            }
        }
        for(int i = s.size()/2 ; i < s.size() ; i++){
            if(vow(s[i])){
                b++;
            }
        }
        return a==b;
    }
};