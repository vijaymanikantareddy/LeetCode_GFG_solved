class Solution {
public:
    int maxOperations(string s) {
        int res = 0, p = 0;
        bool flag = false;
        vector<int> v;
        for(char ch: s){
            if(ch == '1'){
                v.push_back(1);
                flag = true;
            }else if(ch == '0' and flag){
                v.push_back(0);
                flag = false;
            }
        }
        for(auto it: v){
            if(it == 1){
                p++;
            }else{
                res += p;
            }
        }
        return res;
    }
};