class Solution {
public:
    int maxScore(string s) {
        int total = 0;
        int sum = 0;
        for(int i = 0 ; i < s.size() ; i++) total += (s[i] == '1');
        int res = 0;
        if(total == 0) return s.size()-1;
        for(int i = 0 ; i < s.size()-1 ; i++){
            if(s[i] == '1'){
                total--;
            }else{
                sum++;
            }
            res = max(res, sum + total);
        }
        return res;
    }
};