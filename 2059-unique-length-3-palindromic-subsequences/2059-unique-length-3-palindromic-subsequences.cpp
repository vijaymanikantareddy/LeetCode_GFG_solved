class Solution {
public:
    pair<int, int> fun(char ch, string s){
        int a = -1, b = -1;
        int n = s.size();
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ch && a == -1){
                a = i;
            }
            if(s[n-i-1] == ch && b == -1){
                b = n-i-1;
            }
            if(a != -1 && b != -1) break;
        }
        return {a, b};
    }
    int countPalindromicSubsequence(string s) {
        int res = 0;
        unordered_set<char> uni;
        for(auto it: s) uni.insert(it);

        for(char it: uni){
            auto a = fun(it, s);
            int start = a.first, end = a.second;
            if(start < end){
                unordered_set<char> temp;
                for(int i = start+1 ; i < end ; i++) temp.insert(s[i]);
                res += temp.size();
            }
        }
        return res;
    }
};