class Solution {
    public String strWithout3a3b(int a, int b) {
        String res = "";
        while(a>0 || b > 0){
            if(a ==  b){
                res += "ab";
                a--;
                b--;
            }
            else if(a > b){
                if(a > 2 && b >= 1){
                    res += "aab";
                    a-=2;
                    b--;
                }else if(a >= 2 && b < 1){
                    res += "aa";
                    a-=2;
                }else{
                    res += "a";
                    a--;
                }
            }else {
                if(b >= 2 && a >= 1){
                    res += "bba";
                    b-=2;
                    a--;
                }else if(b >= 2 &&  a< 1){
                    res += "bb";
                    b-=2;
                }else{
                    res += "b";
                    b--;
                }
            }
        }
        return res;
    }
}