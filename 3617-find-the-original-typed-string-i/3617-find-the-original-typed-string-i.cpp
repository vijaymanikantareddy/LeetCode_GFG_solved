class Solution {
public:
    int possibleStringCount(string word) {
        long long res = 1;
        int i = 1, cnt = 1;
        while(i < word.size()){
            if(word[i] == word[i - 1]){
                cnt++;
            }else{
                if(cnt > 1){
                    res += (cnt - 1);
                }
                cnt = 1;
            }
            i++;
        }
         if(cnt > 1){
            res += (cnt - 1);
        }
        return res;
    }
};