class Solution {
public:
    bool isPathCrossing(string path) {
        pair<int, int> p;
        map<pair<int, int>, int> mp;
        p = {0, 0};
        mp[p]++;
        for(int i = 0 ; i < path.size() ; i++){
            if(path[i] == 'N'){
                p.second++;
            }else if(path[i] == 'E'){
                p.first++;
            }else if(path[i] == 'W'){
                p.first--;
            }else{
                p.second--;
            }
            if(mp.find(p) != mp.end()){
                return true;
            }
            mp[p]++;
        }
        return false;
    }
};