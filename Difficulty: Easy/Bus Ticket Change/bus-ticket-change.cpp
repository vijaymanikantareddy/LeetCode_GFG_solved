class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        if(arr[0] != 5) return false;
        int five = 0, ten = 0;
        for(int ele: arr){
            if(ele == 5){
                five++;
            }
            else if(ele == 10){
                ten++;
                if(five == 0) return false;
                five--;
            }
            else if(ele == 20 and five>=1 and ten>=1){
                ten--;
                five--;
            }
            else if(ele == 20 and ten == 0 and five >=3){
                five -= 3;
            }
            else{
                return false;
            }
        }
        return true;
    }
};