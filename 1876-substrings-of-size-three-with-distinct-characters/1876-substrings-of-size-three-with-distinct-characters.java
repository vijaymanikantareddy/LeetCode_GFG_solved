class Solution {
    public int countGoodSubstrings(String s) {
        if(s.length() < 3){
            return 0;
        }
        HashMap<Character, Integer> mp = new HashMap<>();
        int res = 0;
        for(int i = 0 ; i < 3; i++){
            if(mp.containsKey(s.charAt(i))){
                mp.put(s.charAt(i), mp.get(s.charAt(i))+1);
            }else{
                mp.put(s.charAt(i), 1);
            }
        }
        if(mp.size() == 3){
            res++;
        }
        for(int i = 3 ; i < s.length() ; i++){
            if(mp.get(s.charAt(i-3)) == 1){
                mp.remove(s.charAt(i-3));
            }else{
                mp.put(s.charAt(i-3), mp.get(s.charAt(i-3))-1);
            }

            if(mp.containsKey(s.charAt(i))){
                mp.put(s.charAt(i), mp.get(s.charAt(i))+1);
            }else{
                mp.put(s.charAt(i), 1);
            }
            
            if(mp.size() == 3){
                res++;
            }
        }
        return res;
    }
}