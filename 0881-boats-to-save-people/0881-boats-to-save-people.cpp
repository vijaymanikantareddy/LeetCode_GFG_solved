class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i = 0, j = people.size()-1, res = 0;
        sort(people.begin(), people.end());
        while(i <= j){
            int sum = people[i]+people[j];
            if(sum <= limit){
                i++;
            }
            j--;
            res++;
        }
        return res;
    }
};