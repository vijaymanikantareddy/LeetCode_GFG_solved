class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for(auto it: s) mp[it]++;
        int om = 0, em = INT_MAX;
        for(auto it: mp){
            if(it.second % 2){
                om = max(om, it.second);
            }else{
                em = min(em, it.second);
            }
        }
        cout << om << " " << em ;
        return om - em;
    }
};