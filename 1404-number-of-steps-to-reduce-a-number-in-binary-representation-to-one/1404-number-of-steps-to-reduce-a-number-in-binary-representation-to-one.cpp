class Solution {
public:
    int numSteps(string s) {
        int res = 0, c = 0;
        for(int i = s.size()-1 ; i > 0 ; i--){
            int num = s[i] - '0';
            if(s[i] == '1'){
                if(num+c == 1){
                    res += 2;
                    c = 1;
                }else{
                    res++;
                }
            }else{
                if(num+c == 1){
                    res += 2;
                }else{
                    res++;
                }
            }
        }
        return res+c;
    }
};