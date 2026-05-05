class Solution {
  public:
    long long sumXOR(vector<int> &arr) {
        // code here
        long long res = 0;
        int n = arr.size();
        for(long long i = 0 ; i < 32 ; i++){
            long long ones = 0, zeroes = 0;
            for(int j = 0 ; j < arr.size() ; j++){
                if((arr[j] >> i)&1 == 1) ones++;
                else zeroes++;
            }
            res += (1 << i) * ones * zeroes;
        }
        return res;
    }
};