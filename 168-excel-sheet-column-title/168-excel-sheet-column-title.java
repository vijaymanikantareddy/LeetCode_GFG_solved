class Solution {
    public String convertToTitle(int columnNumber) {
        String res="";
        while(columnNumber>0)
        {
            int d = columnNumber%26;
            if(d==0){
                res = 'Z'+res;
                columnNumber=columnNumber/26-1;
            }
            else
            {   
                res = (char)(64+d)+res;
                columnNumber/=26;
            }
        }
        return res;
    }
}