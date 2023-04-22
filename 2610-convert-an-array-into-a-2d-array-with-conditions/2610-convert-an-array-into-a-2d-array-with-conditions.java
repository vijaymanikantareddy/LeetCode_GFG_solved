class Solution {
    public List<List<Integer>> findMatrix(int[] nums) {
        int v[] = new int[201];
        int cnt = 0;
        for(int i = 0 ; i < nums.length ; i++){
            v[nums[i]]++;
            cnt++;
        }
        List<List<Integer>> res = new ArrayList<>();
        while(cnt > 0){
            ArrayList<Integer> temp = new ArrayList<>();
            for(int i = 0 ; i <= 200 ; i++){
                if(v[i] > 0){
                    temp.add(i);
                    v[i]--;
                    cnt--;
                }
            }   
            res.add(temp);
        }
        return res;
    }
}