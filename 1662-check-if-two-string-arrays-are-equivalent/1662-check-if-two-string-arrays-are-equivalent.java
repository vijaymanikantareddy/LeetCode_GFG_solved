class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        String a = "", b = "";
        for(String it: word1){
            a += it;
        }
        for(String it: word2){
            b += it;
        }
        if(a.compareTo(b)==0){
            return true;
        }
        return false;
    }
}