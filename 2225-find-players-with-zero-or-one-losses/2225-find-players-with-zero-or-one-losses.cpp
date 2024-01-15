class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> win, los;
        for(auto it: matches){
            win[it[0]]++;
            los[it[1]]++;
        }
        vector<vector<int>> res(2);
        for(auto it: win){
            if(los.find(it.first) == los.end()){
                res[0].push_back(it.first);
            }
        }
        for(auto it: los){
            if(it.second == 1){
                res[1].push_back(it.first);
            }
        }
        return res;
    }
};