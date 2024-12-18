class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        // vector<int> res(n);
        for(int i = 0 ; i < n ; i++){
            int j = i+1;
            while(j < n){
                if(prices[j] <= prices[i]){
                    break;
                }
                j++;
            }
            if(j != n){
                prices[i] -= prices[j];
            }
        }
        return prices;
    }
};