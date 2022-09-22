class Solution {
    public String reverseWords(String str) {
        String res="";
        String arr[] = str.split(" ");
        for(int i=0 ; i<arr.length ; i++)
        {
            char ch[] = arr[i].toCharArray();
            int l=0, r=ch.length-1;
            while(l<=r){
                char te=ch[l];
                ch[l]=ch[r];
                ch[r]=te;
                l++;
                r--;
            }
            String tmp="";
            for(int j=0 ; j<ch.length ; j++){
                tmp += ch[j];
            }
            if(i==arr.length-1){
                res+=tmp;
            }
            else res+=tmp+" ";
        }
        return res;
    }
}