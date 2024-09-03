class Solution {
public:
    int getLucky(string s, int k) {
        string a = "";
        for(auto it: s){
            a += to_string(it - 'a'+1);
        }
        cout << a << endl;
        while(k-- > 1){
            int t = 0;
            for(auto it: a){
                t += (it - '0');
            }
            a = to_string(t);
        }
        int res = 0;
        for(auto it: a) res += (it - '0');
        return res;
    }
};