class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        unordered_map<int, int> mp;
        long long sum = 0;
        vector<int> ones, twos;
        for(auto it: nums){
            mp[it]++;
            sum += it;
            if(it%3 == 1) ones.push_back(it);
            if(it%3 == 2) twos.push_back(it);
        }
        sort(ones.begin(), ones.end());
        sort(twos.begin(), twos.end());
        if(sum%3 == 0) return sum;
        else if(sum%3 == 1){
            int rem = 1e4;
            if(!ones.empty()){
                rem = min(rem, ones.front());
            }
            if(twos.size() > 1){
                rem = min(rem, twos[0] + twos[1]);
            }
            sum -= rem;
            return sum;
        }
        else{
            int rem = 1e4;
            if(!twos.empty()){
                rem = min(rem, twos.front());
            }
            if(ones.size() > 1){
                rem = min(rem, ones[0] + ones[1]);
            }
            sum -= rem;
            return sum;
        }
        
    }
};