class Solution {
public:
    bool fun(string s){
        if(s[0] == '0') return false;
        int n = stoi(s);
        return (n&(n-1))==0;
    }
    bool reorderedPowerOf2(int n) {
        string s = "";
        int temp = n;
        while(temp > 0){
            int d = temp % 10;
            temp /= 10;
            s.push_back('0' + d);
        }
        if(fun(s)) return true;
        
        string t = s;
        next_permutation(t.begin(), t.end());
        while(s != t){
            if(fun(t)){
                return true;
            }
            next_permutation(t.begin(), t.end());
        }
        return false;
    }
};