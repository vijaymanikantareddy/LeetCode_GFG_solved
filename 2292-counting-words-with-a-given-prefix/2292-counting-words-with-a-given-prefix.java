class Solution {
    public int prefixCount(String[] words, String pref) {
        int len = pref.length();
        int cnt = 0;
        for(String word: words){
            if( word.length()>=len && word.substring(0, len).equals(pref)){
                cnt++;
            }
        }
        return cnt;
    }
}