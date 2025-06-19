class Solution {
  public:
    string caseSort(string& s) {
        // code here
        string lc, uc;
        for(char ch: s){
            if(ch >= 'a' && ch <= 'z'){
                lc.push_back(ch);
            }else{
                uc.push_back(ch);
            }
        }
        sort(lc.begin(), lc.end());
        sort(uc.begin(), uc.end());
        int a = 0, b = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] = lc[a++];
            }else{
                s[i] = uc[b++];
            }
        }
        return s;
    }
};