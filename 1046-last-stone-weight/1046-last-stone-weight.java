class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        for(int i = 0 ; i < stones.length ; i++){
            pq.add(stones[i]);
        }
        while(pq.size() > 1){
            pq.add(pq.poll()-pq.poll());
        }
        return pq.poll();
    }
}