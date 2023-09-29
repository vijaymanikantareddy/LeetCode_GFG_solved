class Solution {
public:
    string attach(int n, char ch){
        string res = "";
        for(int i = 0 ; i < n ; i++){
            res.push_back(ch);
        }
        return res;
    }
    string alphabetBoardPath(string target) {
        map<char, pair<int, int>> mp;
        for(int i = 0 ; i <= 4 ; i++){
            mp['a'+i] = {0, i};
            mp['f'+i] = {1, i};
            mp['k'+i] = {2, i};
            mp['p'+i] = {3, i};
            mp['u'+i] = {4, i};
        }
        mp['z'] = {5, 0};
        
        string res;
        char pre = 'a';
        for(char ch: target){
            int r = mp[ch].first - mp[pre].first;
            int c = mp[ch].second - mp[pre].second;
            if(pre != 'z' && ch != 'z'){
                if(c > 0){
                    res += attach(c, 'R');
                }else{
                    res += attach(-c, 'L');
                }
                if(r > 0){
                    res += attach(r, 'D');
                }else{
                    res += attach(-r, 'U');
                }
            }else{
                if(pre == 'z' && ch != 'z'){
                    if(r > 0){
                        res += attach(r, 'D');
                    }else{
                        res += attach(-r, 'U');
                    }
                    if(c > 0){
                        res += attach(c, 'R');
                    }else{
                        res += attach(-c, 'L');
                    }
                    
                }else{
                    if(c > 0){
                        res += attach(c, 'R');
                    }else{
                        res += attach(-c, 'L');
                    }
                    if(r > 0){
                        res += attach(r, 'D');
                    }else{
                        res += attach(-r, 'U');
                    }
                }
            }
            pre = ch;
            res.push_back('!');
        }
        return res;
    }
};