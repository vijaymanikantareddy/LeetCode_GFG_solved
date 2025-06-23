class Solution {
  public:
    string minSum(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        string a = "", b = "";
        int i = 0;
        while(i < arr.size() && arr[i] == 0){
            i++;
        }
        if(i == arr.size()) return "0";

        while(i < arr.size()){
            if(i%2 == 0){
                a += ('0' + arr[i]);
            }else{
                b += ('0' + arr[i]);
            }
            i++;
        }
        
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        string res = "";
        
        int car = 0, j = 0;
        i = 0;
        while(i < a.size() && j < b.size()){
            int a1 = a[i] - '0', b1 = b[j] - '0';
            int s = car + a1 + b1;
            car = s/10;
            s = s%10;
            i++;
            j++;
            res.push_back('0'+s);
        }
        
        while(i < a.size()){
            int a1 = a[i] - '0';
            int s = car + a1;
            car = s/10;
            s = s%10;
            i++;
            res.push_back('0' + s);
        }
        
        while(j < b.size()){
            int b1 = b[i] - '0';
            int s = car + b1;
            car = s/10;
            s = s%10;
            j++;
            res.push_back('0' + s);
        }
        
        
        if(car != 0){
            res.push_back('0'+car);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};