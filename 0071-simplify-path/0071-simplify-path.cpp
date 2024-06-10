class Solution {
public:
    bool dots(string s){
        int i = 0, cnt = 0;
        while(i < s.size()){
            if(s[i] == '.') cnt++;
            i++;
        }
        return (cnt == 2 && s.size() == 2);
    }
    string simplifyPath(string path) {
        path.push_back('/');
        vector<string> st;
        string t;
        vector<string> words;
        int i = 0;
        while(i < path.size()){
            if(path[i] == '/'){
                if(t.size()){
                    words.push_back(t);
                    t = "";
                }
            }else{
                t += path[i];
            }
            i++;
        }
        for(int i = 0 ; i < words.size() ; i++){
            if(dots(words[i])){
                if(!st.empty()){
                    st.pop_back();
                }
            }else{
                if(words[i].size() == 1 && words[i][0] == '.') continue;
                st.push_back(words[i]);
            }
        }
        string res = "";
        // reverse(st.begin(), st.end());
        for(auto it: st) res += "/"+it;
        // res.pop_back();
        // for(auto it: words) cout << it << " ";
        if(!res.size()) res.push_back('/');
        return res;
    }
};