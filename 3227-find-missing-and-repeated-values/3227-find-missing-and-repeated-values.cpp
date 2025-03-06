class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int, int> mp;
        for(auto r: grid){
            for(auto it: r){
                mp[it]++;
            }
        }
        int a = -1, b = -1, n = grid.size();
       for(int i = 1 ; i <=n*n ; i++){
           if(mp[i] > 1){
               a = i;
           }
           if(mp[i] == 0){
               b = i;
           }
       }
        return {a, b};
    }
};