class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_map<string, int> mp;
        for(auto it: obstacles){
            string s = to_string(it[0])+"+"+to_string(it[1]);
            mp[s]++;
        }
        vector<vector<int>> vc = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}; // W N E S
        int x = 0, y = 0;
        int dir = 1;
        int res = 0;
        for(auto it: commands){
            if(it == -1){
                dir = (dir + 1)%4;
            }else if(it == -2){
                if(dir == 0) dir = 3;
                else dir--;
            }else{
                for(int i = 1 ; i <= it ; i++){
                    int nx = x + vc[dir][0];
                    int ny = y + vc[dir][1];
                    string s = to_string(nx)+"+"+to_string(ny);
                    if(mp.find(s) != mp.end())
                        break;
                    res = max(res, nx*nx + ny*ny);
                    x = nx;
                    y = ny;
                }
            }
        }
        return res;
    }
};