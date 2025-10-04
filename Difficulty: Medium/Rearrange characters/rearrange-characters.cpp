class Solution {
  public:
    string rearrangeString(string s) {
        // code here
        unordered_map<char, int> mp;
        for(auto it: s){
            mp[it]++;
        }
        vector<pair<int, char>> vc;
        for(auto it: mp){
            if(it.second > (s.size() + 1)/2){
                return "";
            }
            vc.push_back({it.second, it.first});
        }
        
        sort(vc.rbegin(), vc.rend());
        
        string res(s.size(), '-');
        int index = 0;
        for(auto it: vc){
            for(int i = 0 ; i < it.first ; i++){
                res[index] = it.second;
                index += 2;
                if(index >= s.size()){
                    index = 1;
                }
            }
        }
        return res;
    }
};