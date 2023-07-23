class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        map<string, int> mp;
        for(string st: dictionary){
            mp[st]++;
        }
        vector<string> arr;
        istringstream iss(sentence);
        string part;
        while (getline(iss, part, ' ')) {
            arr.push_back(part);
        }
        string res = "";
        for(string s: arr){
            bool flag = true;
            string a = "";
            for(char ch: s){
                a += ch;
                if(mp.find(a) != mp.end()){
                    res += a;
                    flag = false;
                    break;
                }
            }
            if(flag) res += s;
            res += ' ';
        }
        res.pop_back();
        return res;
    }
};