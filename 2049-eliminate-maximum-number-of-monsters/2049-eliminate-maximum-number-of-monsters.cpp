class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int> time(dist.size());
        for(int i = 0 ; i < dist.size() ; i++){
            time[i] = ceil((double)dist[i]/speed[i]);
        }
        sort(time.begin(), time.end());
        int chg = 0;
        int cnt = 0;
        for(int i = 0 ; i < dist.size() ; i++){
            if(chg >= time[i]){
                return cnt;
            }else{
                chg++;
                cnt++;
            }
        }
        return cnt;
    }
};