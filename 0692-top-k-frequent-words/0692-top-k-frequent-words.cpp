class Solution {
public:
    static bool comp(const pair<string, int>& a, const pair<string, int>& b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        return a.second > b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;
        for(auto it: words) mp[it]++;
        vector<pair<string, int>> vc;
        for(auto it: mp){
            vc.push_back({it.first, it.second});
        }
        sort(vc.begin(), vc.end(), comp);
        vector<string> res;
        for(int i = 0 ; i < k ; i++){
            res.push_back(vc[i].first);
        }
        return res;
    }
};