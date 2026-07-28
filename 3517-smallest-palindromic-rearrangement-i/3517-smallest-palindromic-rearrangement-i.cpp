class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int> mp;
        for(auto it: s){
            mp[it]++;
        }
        char ch = '-';
        for(auto it: mp){
            if(it.second % 2 != 0){
                ch = it.first;
                break;
            }
        }
        int n = s.size();
        string res(n, '-');
        if(ch != '-'){
            res[n/2] = ch;
        }
        int i = 0, j = n - 1;
        for(auto it: mp){
            for(int iter = 0 ; iter < it.second / 2 ; iter++){
                res[i] = it.first;
                res[j] = it.first;
                i++;j--;
            }
        }
        return res;
    }
};