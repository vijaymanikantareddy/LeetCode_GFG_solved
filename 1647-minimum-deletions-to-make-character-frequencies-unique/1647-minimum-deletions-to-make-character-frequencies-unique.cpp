class Solution {
public:
    int minDeletions(string s) {
        map<char, int> mp;
        for(auto it: s){
            mp[it]++;
        }
        int res = 0;
        set<int> se;
        for(auto it: mp){
            if(se.find(it.second) != se.end()){
                while(se.find(it.second) != se.end() && it.second > 0){
                    it.second--;
                    res++;
                }
                if(it.second > 0) se.insert(it.second);
            }else{
                se.insert(it.second);
            }
        }
        return res;
    }
};