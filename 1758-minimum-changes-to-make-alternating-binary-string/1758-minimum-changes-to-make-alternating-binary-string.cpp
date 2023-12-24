class Solution {
public:
    int minOperations(string s) {
        int a = 0, b = 0;
        string vi, ci;
        for(int i = 0 ; i < s.size() ; i++){
            if(i%2 == 0){
                vi.push_back('1');
                ci.push_back('0');
            }else{
                vi.push_back('0');
                ci.push_back('1');
            }
        }
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] != vi[i]){
                a++;
            }
            if(s[i] != ci[i]){
                b++;
            }
        }
        return min(a, b);
    }
};