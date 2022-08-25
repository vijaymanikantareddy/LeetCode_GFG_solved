class Solution {
public:
    int percentageLetter(string s, char letter) {
        int d = 0;
        for(char i: s){
            if(i==letter){
                d++;
            }
        }
        return d==0? 0: d*100/s.size();
    }
};