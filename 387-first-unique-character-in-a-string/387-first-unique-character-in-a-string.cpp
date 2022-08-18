class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mpp;
        for(int i=0 ; i<s.size() ; i++){
            mpp[s[i]]++;
        }
        int res = -1;
        for(int i=0 ; i<s.size(); i++){
            for(auto it: mpp){
                if(s[i]==it.first and it.second==1){
                    return i;
                }
            }
        }
        return res;
    }
};