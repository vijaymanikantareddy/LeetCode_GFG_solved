class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> res;
        map<int, int> mc, mb;
        for(auto it: queries){
            int a = it[0];
            int b = it[1];
            if(mb.find(a) != mb.end()){
                int hc = mb[a];
                mc[hc]--;
                if(mc[hc] == 0){
                    mc.erase(hc);
                }
            }
            mb[a] = b;
            mc[b]++;
            res.push_back(mc.size());
        }
        return res;
    }
};