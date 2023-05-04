class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> rad, dir;
        for(int i = 0 ; i < senate.size() ; i++){
            if(senate[i]=='R'){
                rad.push(i);
            }else dir.push(i);
        }
        int n = senate.size();
        while(true){
            if(rad.size() == 0){
                return "Dire";
            }
            if(dir.size() == 0){
                return "Radiant";
            }
            int r = rad.front();
            int d = dir.front();
            rad.pop();
            dir.pop();
            if(r < d){
                rad.push(r+n);
            }else{
                dir.push(d+n);
            }
        }
        return "";
    }
};