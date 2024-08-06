class Solution {
public:
    int minimumPushes(string word) {
        if(word.size() <= 8) return word.size();
        vector<int> vc(26, 0);
        for(auto it: word){
            vc[it-'a']++;
        }
        sort(vc.rbegin(), vc.rend());
        int res = 0;
        int i = 0, cnt = 0, mul = 1;
        while(i < 26){
            if(vc[i] == 0) break;
            if(cnt == 8){
                mul++;
                cnt = 0;
            }
            res += vc[i]*mul;
            cnt++;
            i++;
        }
        return res;
    }
};