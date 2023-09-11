class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int, vector<int>> mp;
        for(int i = 0 ; i < groupSizes.size() ; i++){
            mp[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> res;
        for(auto it: mp){
            if(it.second.size() != it.first){
                int i = 0;
                vector<int> v;
                while(i < it.second.size()){
                    if(v.size() >= it.first){
                        res.push_back(v);
                        v = {};
                    }
                    v.push_back(it.second[i]);
                    i++;
                }
                if(v.size()) res.push_back(v);
            }else{
                res.push_back(it.second);
            }
        }
        return res;
    }
};