class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int>mp;
        for(int i=0 ; i<edges.size() ; i++){
            for(int j=0 ; j<edges[i].size() ; j++){
                mp[edges[i][j]]++;
            }
        }
        return mp[edges[0][0]]>mp[edges[0][1]]? edges[0][0]: edges[0][1];
    }
};