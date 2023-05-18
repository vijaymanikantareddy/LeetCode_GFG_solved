class Solution {
    public List<Integer> findSmallestSetOfVertices(int n, List<List<Integer>> edges) {
        List<Integer> res = new ArrayList<>();
        HashMap<Integer, Integer> mp = new HashMap<>();
        for(int i = 0; i < edges.size(); i++){
            int b = edges.get(i).get(1);
            if(mp.containsKey(b)){
                mp.put(b, mp.get(b)+1);
            }else{
                mp.put(b, 1);
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(!mp.containsKey(i)){
                res.add(i);
            }
        }
        return res;
    }
}