class Solution {
public:
    vector<string> res;
    void fun(string digits, map<char, string>mp, int start, string temp){
        if(start > digits.size()){
            return;
        }
        if(temp.size() == digits.size()){
            if(temp.size() != 0)
                res.push_back(temp);
            return ;
        }
        for(int i = 0 ; i < mp[digits[start]].size() ; i++){
            temp.push_back(mp[digits[start]][i]);
            fun(digits, mp, start+1, temp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        string temp = "";
        fun(digits, mp, 0, temp);
        return res;
    }
};