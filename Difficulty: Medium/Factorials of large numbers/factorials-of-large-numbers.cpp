// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int> res;
        res.push_back(1);
        int carry = 0;
        for(int i = 2 ; i <= n ; i++){
            for(int j = 0 ; j < res.size() ; j++){
                long long temp = carry + res[j] * i;
                res[j] = temp%10;
                carry = temp / 10;
            }
            while(carry){
                res.push_back(carry%10);
                carry /= 10;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};