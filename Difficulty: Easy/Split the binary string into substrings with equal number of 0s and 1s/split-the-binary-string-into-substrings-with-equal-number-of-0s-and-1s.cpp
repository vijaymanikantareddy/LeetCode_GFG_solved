class Solution {
  public:
    int maxSubStr(string str) {
        // Write your code here
        int cnt = 0;
        int a = 0, b = 0;
        for(char ch: str){
            if(ch == '0'){
                a++;
            }else{
                b++;
            }
            if(a == b) cnt++;
        }
        if(a != b) return -1;
        return cnt;
    }
};
