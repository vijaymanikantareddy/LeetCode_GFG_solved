class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
       int curr = arr[0], streak = 0;
       for(int i = 1 ; i < arr.size() ; i++){
           if(arr[i] > curr){
               curr = arr[i];
               streak = 1;
           }else{
               streak++;
           }
            if(streak == k) return curr;
       } 
       return curr;
    }
};