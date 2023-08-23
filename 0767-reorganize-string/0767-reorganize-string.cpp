class Solution {
public:
    
    string reorganizeString(string s) {
        map<char, int> mp;
        string res;
        int n = s.size();
        for(int i = 0 ; i < n ; i++){
            mp[s[i]]++;
            res.push_back('A');
        }
        vector<pair<int, char>> vc;
        for(auto it: mp){
            if(it.second > (n+1)/2) return "";
            vc.push_back({it.second, it.first});
        }
        sort(vc.begin(), vc.end());
        int cnt = 0;
        int eind = 0, oind = 1;
        for(int i = vc.size()-1 ; i >= 0 ; i--){
            for(int j = 0 ; j < vc[i].first ; j++){
                if(eind < n){
                    res[eind] = vc[i].second;
                    eind += 2;
                }else if(oind < n){
                    res[oind] = vc[i].second;
                    oind += 2;
                }
            }
        }
        
        return res;
    }
};