class Solution {
    public int largestAltitude(int[] gain) {
        int max_al=0;
        int cur_al=0;
        for(int i=0 ; i<gain.length ; i++){
            cur_al+=gain[i];
            max_al = Math.max(max_al, cur_al);
        }
        return max_al;
    }
}