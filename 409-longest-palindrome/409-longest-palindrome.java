class Solution {
    public int longestPalindrome(String s) {
        HashMap<Character, Integer> hm = new HashMap<Character, Integer>();
        int res=0;
        boolean set = true;
        for(int i=0 ; i<s.length() ; i++)
        {
            if(hm.containsKey(s.charAt(i))){
                hm.put(s.charAt(i), (int)hm.get(s.charAt(i))+1);
            }
            else{
                hm.put(s.charAt(i), 1);
            }
        }
        for(Map.Entry entry: hm.entrySet())
        {
            if((int)entry.getValue()%2!=0 && set)
            {
                res += (int)entry.getValue();
                set = false;
            }
            else if((int)entry.getValue()%2!=0){
                res += (int)entry.getValue()-1;
            }
            else{
                res += (int)entry.getValue();
            }
        }
        return res;
    }
}