class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        for(char ch: letters){
            if(ch>target){
                return ch;
            }
        }
        return letters[0];
    }
}