class Solution {
    public int strStr(String haystack, String needle) {
        // return haystack.indexOf(needle);
        
        int le = needle.length();
        for(int i=0 ; i<=haystack.length()-le ; i++)
        {
            if(needle.equals(haystack.subSequence(i, le+i))){
                return i;
            }
        }
        return -1;
    }
}