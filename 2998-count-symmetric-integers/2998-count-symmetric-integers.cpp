class Solution {
public:
    int sumStr(string s, int start, int end){
        int res = 0;
        for(int i = start; i <= end ; i++){
            int d = s[i]-'0';
            res += d;
        }
        return res;
    }
    int countSymmetricIntegers(int low, int high) {
        int res = 0;
        for(int i = low ; i <= high ; i++){
            string a = to_string(i);
            if(a.size()%2 == 0){
                int f = sumStr(a, 0, a.size()/2-1);
                int s = sumStr(a, a.size()/2, a.size()-1);
                if(f == s){
                    res++;
                }
            }
        }
        return res;
    }
};