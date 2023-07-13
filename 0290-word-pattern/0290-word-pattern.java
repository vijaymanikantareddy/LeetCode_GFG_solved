class Solution {
    public boolean wordPattern(String pattern, String s) {
        HashMap<Character, String> mp = new HashMap<>();
        HashSet<String> hs = new HashSet<>();
        String arr[] = s.split(" ");
        if(pattern.length() != arr.length) return false;
        for(int i = 0 ; i < pattern.length(); i++){
            char ch = pattern.charAt(i);
            if(!mp.containsKey(ch)){
                if(hs.contains(arr[i])) return false;
                mp.put(ch, arr[i]);
                hs.add(arr[i]);
            }else{
                if(mp.get(ch).equals(arr[i]) == false){
                    return false;
                }
            }
        }
        return true;
    }
}