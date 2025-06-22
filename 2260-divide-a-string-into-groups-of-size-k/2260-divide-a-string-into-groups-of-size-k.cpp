class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        int i = 0;
        for(int i = 0 ; i < s.size() ; i += k){
            if(i + k <= s.size()){
                res.push_back(s.substr(i, k));
            }else{
                int j = i;
                string temp;
                while(j < s.size()) temp.push_back(s[j++]);
                while(temp.size() < k) temp.push_back(fill);

                res.push_back(temp);
            }
        }
        return res;
    }
};