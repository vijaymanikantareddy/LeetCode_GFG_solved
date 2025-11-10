class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size()) return -1;
        for(int i = 0 ; i <= haystack.size() - needle.size() ; i++){
            bool flag = true;
            if(haystack[i] == needle[0]){
                for(int j = 1 ; j < needle.size() ; j++){
                    if(haystack[i + j] != needle[j]){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    return i;
                }
            }
        }
        return -1;
    }
};