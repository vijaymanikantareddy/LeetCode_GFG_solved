class Solution {
public:
    bool isvow(int i){
        return (i == 'a' - 'a') or (i == 'e' - 'a') or (i == 'i' - 'a') or (i == 'o' - 'a') or (i == 'u' - 'a');
    }
    int maxFreqSum(string s) {
        vector<int> mp(26, 0);
        for(auto it: s){
            mp[it - 'a']++;
        }
        int v = 0, c = 0;
        for(int i = 0 ; i < 26 ; i++){
            if(isvow(i)){
                v = max(v, mp[i]);
            }else{
                c = max(c, mp[i]);
            }
        }
        return v + c;
    }
};