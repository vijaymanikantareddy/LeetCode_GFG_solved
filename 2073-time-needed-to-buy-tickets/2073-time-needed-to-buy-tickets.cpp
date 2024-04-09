class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int res = 0;
        int i = 0;
        while(tickets[k] > 0){
            if(i == tickets.size()){
                i = 0;
            }
            if(tickets[i] == 0){
                i++;
                continue;
            }
            res++;
            tickets[i++]--;
        }
        return res;
    }
};