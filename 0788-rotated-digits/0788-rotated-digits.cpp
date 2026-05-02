class Solution {
public:
    int rotatedDigits(int n) {
        int cnt = 0;
        for(int i = 1 ; i <= n ; i++){
            int num = i;
            
            bool unrotated = false, rotated = false;

            while(num > 0){
                int d = num%10;
                num /= 10;

                if(d == 3 || d == 4 || d == 7){
                    unrotated = true;
                    break;
                }
                else if(d == 2 || d == 5 || d == 6 || d == 9){
                    rotated = true;
                }
            }
            if(rotated && !unrotated){
                cnt++;
            }
        }
        return cnt;
    }
};