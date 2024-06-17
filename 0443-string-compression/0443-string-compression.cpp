class Solution {
public:
    string digits(int n){
        if(n == 1) return "";
        string s = to_string(n);
        return s;
    }
    int compress(vector<char>& chars) {
        int cnt = 1;
        int i = 0, j = 0;
        while(j < chars.size()-1){
            if(chars[j] == chars[j+1]){
                cnt++;
            }else{
                chars[i++] = chars[j];
                string t = digits(cnt);
                for(int k = 0 ; i < chars.size() && k < t.size() ; k++){
                    chars[i++] = t[k];
                }
                cnt = 1;
            }
            j++;
        }
        chars[i++] = chars[j];
        string t = digits(cnt);
        for(int k = 0 ; i < chars.size() &  k < t.size() ; k++){
            chars[i++] = t[k];
        }
        return i;
    }
};