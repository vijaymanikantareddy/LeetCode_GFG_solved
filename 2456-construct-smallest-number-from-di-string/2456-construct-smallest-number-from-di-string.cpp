class Solution {
public:
    bool fun(string numbers, string pattern){
        for(int i = 0 ; i < pattern.size() ; i++){
            int fi = numbers[i] - '0', se = numbers[i+1]-'0';
            if(pattern[i] == 'I' && fi > se){
                return false;
            }
            if(pattern[i] == 'D' && fi < se){
                return false;
            }
        }
        return true;
    }
    string smallestNumber(string pattern) {
        vector<string> pos;
        int n = pattern.size();
        string s = "";
        for(int i = 1 ; i <= n+1 ; i++){
            s += to_string(i);
        }
        do{
            pos.push_back(s);
        }while(next_permutation(s.begin(), s.end()));
        string res = "999999999";
        for(auto it: pos){
            if(fun(it, pattern)){
                res = min(res, it);
            }
        }
        return res;
    }
};