class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        unordered_map<string, vector<int>> mp;
        int n = grid.size();
        for(int i = 0 ; i < n ; i++){
            string s = "0" + to_string(i);
            int r = 0, c = i;
            while(r < n && c < n){
                mp[s].push_back(grid[r][c]);
                r++;
                c++;
            }
        }

        for(int i = 1 ; i < n ; i++){
            string s = to_string(i) + "0";
            int r = i, c = 0;
            while(r < n && c < n){
                mp[s].push_back(grid[r][c]);
                r++;
                c++;
            }
        }
        for(auto& it: mp){
            string key = it.first;
            int r = key[0] - '0';
            int c = key[1] - '0';
            if(r < c)
                sort(it.second.begin(), it.second.end());
            else 
                sort(it.second.rbegin(), it.second.rend());

            for(int ele: it.second){
                grid[r][c] = ele;
                r++;
                c++;
            }
        }

        // for(auto it: mp){
        //     cout << it.first[0] -'0' << " " << it.first[1]-'0' << " ";
        //     cout << it.first << " -> " ;
        //     for(auto e: it.second) cout << e << " ";
        //     cout << endl;
        // }

        // for(auto it: mp){
        //     string key = it.first;
        //     int r = key[0] - '0';
        //     int c = key[1] - '0';
            
        // }

        return grid;
    }
};