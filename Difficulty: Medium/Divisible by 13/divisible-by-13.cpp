class Solution {
  public:
    bool divby13(string &s) {
        // code here
        int num = 0;
        for(int i = 0 ; i < s.size() ; i++){
            num = (num * 10) + (s[i] - '0');
            num = num%13;
        }
        return (num == 0);
    }
};