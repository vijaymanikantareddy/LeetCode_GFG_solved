class Solution {
public:
    bool judgeCircle(string moves) {
        int side=0, ver=0;
        for(char i: moves){
            if(i=='L')
                side++;
            if(i=='R')
                side--;
            if(i=='U')
                ver++;
            if(i=='D')
                ver--;
        }
        return (side==0 and ver==0);
    }
};