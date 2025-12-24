class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.rbegin(), capacity.rend());
        int sum = 0;
        for(int i = 0 ; i < apple.size() ; i++){
            sum += apple[i];
        }
        int it = 0;
        for(; it < capacity.size();){
            sum -= capacity[it];
            it++;
            if(sum <= 0){
                break;
            }
        }
        return it;
    }
};