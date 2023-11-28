class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k > s.size()) return false;
        unordered_set<string> se;
        for(int i = 0 ; i < s.size()-k+1 ; i++){
            se.insert(s.substr(i, k));
        }
        cout << se.size() << " " << (1 << k);
        return se.size() == (1 << k);
    }
};