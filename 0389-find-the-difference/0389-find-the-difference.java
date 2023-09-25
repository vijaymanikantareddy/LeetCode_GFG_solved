class Solution {
    public char findTheDifference(String s, String t) {
        int alphabets[] = new int[26];
        for(int i=0 ; i<s.length() ; i++){
            int ind = s.charAt(i)-'a';
            alphabets[ind]++;
        }
        for(int i=0 ; i<t.length() ; i++){
            int ind = t.charAt(i)-'a';
            alphabets[ind]--;
        }
        for(int i=0 ; i<26 ; i++){
            if(alphabets[i]!=0){
                return (char)('a'+i);
            }
            
        }
        return ' ';
    }
}