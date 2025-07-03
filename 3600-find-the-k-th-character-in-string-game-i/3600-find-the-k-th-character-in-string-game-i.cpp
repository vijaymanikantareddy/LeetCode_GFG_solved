class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        while(s.size() < k){
            string temp = "";
            for(int i = 0 ; i < s.size() ; i++){
                if(s[i] == 'z'){
                    temp.push_back('a');
                }else{
                    char ch = s[i];
                    temp.push_back(++ch);
                }
            }
            s += temp;
            // cout << s ;
        }
        
        return s[k - 1];
    }
};