class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int i = 0;
        while(i < s1.size()){
            if(s1[i] == s2[i]){
                i++;
                continue;
            }else{
                for(int j = i+2 ; j < s2.size() ; j += 2){
                    if(s2[i] == s1[j]){
                        swap(s1[i], s1[j]);
                        break;
                    }
                }
                i++;
            }
        }
        return s1 == s2;
    }
};