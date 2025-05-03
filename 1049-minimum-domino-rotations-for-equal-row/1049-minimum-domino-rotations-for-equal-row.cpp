class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int res = INT_MAX;
        bool flag = false;
        for(int i = 1 ; i <= 6 ; i++){
            int tcnt = 0, bcnt = 0;
            int curr = INT_MAX;
            for(int j = 0 ; j < tops.size() ; j++){
                if(tops[j] == i){
                    tcnt++;
                }
                else if(bottoms[j] == i){
                    bcnt++;
                }
            }
            if(tcnt + bcnt == tops.size()){
                curr = min(tcnt, bcnt);
                flag = true;
            }
            res = min(res, curr);
            curr = INT_MAX;
            tcnt = bcnt = 0;
            for(int j = 0 ; j < tops.size() ; j++){
                if(bottoms[j] == i){
                    bcnt++;
                }
                else if(tops[j] == i){
                    tcnt++;
                }
            }
            if(tcnt + bcnt == tops.size()){
                curr = min(tcnt, bcnt);
                flag = true;
            }
            res = min(res, curr);
        }
        if(flag) return res;
        return -1;
    }
};