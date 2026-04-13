class Solution {
  public:
    bool isAll9(vector<int>& nums){
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != 9) return false;
        }
        return true;
    }
    vector<int> nextPalindrome(vector<int>& num) {
        // code here
        if(isAll9(num)){
            num[0] = 1;
            for(int i = 1 ; i < num.size() ; i++) num[i] = 0;
            num.push_back(1);
            return num;
        }
        vector<int> a = num;
        int n = a.size();
        for(int i = 0 ; i < n/2 ; i++){
            a[n - i - 1] = a[i];
        }
        if(a > num) return a;
        int carry = 1;
        int mid = n / 2;
        if(n%2 != 0){
            a[mid] += carry;
            carry = a[mid] / 10;
            a[mid] %= 10;
            mid--;
        }else{
            mid = n / 2 - 1;
        }
        
        while(mid >= 0 && carry){
            a[mid] += carry;
            carry = a[mid] / 10;
            a[mid] %= 10;
            mid--;
        }
        
        for(int i = 0 ; i < n / 2 ; i++){
            a[n - i - 1] = a[i];
        }
        return a;
    }
};