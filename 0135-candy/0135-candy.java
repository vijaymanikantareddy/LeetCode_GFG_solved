class Solution {
    public int candy(int[] ratings) {
        int n = ratings.length;
        int[] v = new int[n];
        Arrays.fill(v, 1);
        for(int i = 0 ; i < ratings.length ; i++){
            if(i == 0){
                if(i+1 < ratings.length && ratings[i] > ratings[i+1]){
                    v[i] = v[i+1]+1;
                }
            }
            else{
                if(ratings[i] > ratings[i-1]){
                    v[i] = v[i-1]+1;
                }
            }
        }
        for(int i = ratings.length-2 ; i > 0 ; i--){
            if(ratings[i] > ratings[i+1] && v[i] <= v[i+1]){
                v[i] = v[i+1]+1;
            }
        }
        if(ratings.length >= 2 && ratings[0] > ratings[1] && v[0] <= v[1]){
            v[0] = v[1]+1;
        }
        int res = 0;
        for(int i = 0 ; i < n ; i++){
            res += v[i];
        }
        return res;
    }
}