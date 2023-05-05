class Solution {
    public boolean isvow(char ch){
        return "aeiou".contains(ch+"");
    }
    public int maxVowels(String s, int k) {
        int res = 0, cnt = 0;
        for(int i = 0 ; i < k ;i++){
            char ch = s.charAt(i);
            if(isvow(ch)){
                cnt++;
            }
        }
        res = res > cnt? res: cnt;
        for(int i = k ; i < s.length() ; i++){
            if(isvow(s.charAt(i-k))){
                cnt--;
            }
            if(isvow(s.charAt(i))){
                cnt++;
            }
            res = res > cnt? res: cnt;
        }
        return res;
    }
}