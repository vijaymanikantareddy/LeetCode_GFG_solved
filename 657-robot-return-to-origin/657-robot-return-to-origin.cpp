class Solution {
public:
    bool judgeCircle(string moves) {
        int side=0, ver=0;
        for(int i=0 ; i<moves.size() ; i++){
            if(moves[i]=='L'){
                side++;
            }
            else if(moves[i]=='R'){
                side--;
            }
            if(moves[i]=='U'){
                ver++;
            }
            else if(moves[i]=='D'){
                ver--;
            }
        }
        return (side==0 and ver==0)? true: false;
    }
};