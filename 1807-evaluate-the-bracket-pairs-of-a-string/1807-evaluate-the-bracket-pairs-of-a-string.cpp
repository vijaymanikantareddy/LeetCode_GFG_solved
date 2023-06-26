class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string, string> mp;
        for(auto it: knowledge){
            mp[it[0]] = it[1];
        }
        string res = "";
        int j;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                string temp = "";
                for(j = i+1 ; j < s.size() && s[j] != ')' ; j++){
                    temp += s[j];
                }
                i = j;
                if(mp.find(temp) != mp.end()){
                    res += mp[temp];
                }else{
                    res += "?";
                }
            }else{
                res += s[i];
            }
        }
        return res;
    }
};