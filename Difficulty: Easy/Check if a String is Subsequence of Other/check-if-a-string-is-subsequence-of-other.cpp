class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        // code here
        int i = 0;
        for(int j = 0 ; j < s2.size() ; j++){
            if(i == s1.size()) return true;
            if(s2[j] == s1[i]){
                i++;
            }
        }
        return (i == s1.size());
    }
};