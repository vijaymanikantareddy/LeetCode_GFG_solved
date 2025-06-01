class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        unordered_map<int, int> mp;
        for(auto it: mat1){
            for(auto ele: it){
                mp[ele]++;
            }
        }
        int res = 0;
        for(int i = 0 ; i < mat2.size() ; i++){
            for(int j = 0 ; j < mat2[i].size() ; j++){
                if(mp.find(x - mat2[i][j]) != mp.end()){
                    res++;
                    mp[x - mat2[i][j]]--;
                    if(mp[x - mat2[i][j]] == 0) 
                        mp.erase(x - mat2[i][j]);
                } 
            }
        }
        return res;
    }
};