class Solution {
public:
    vector<int> ans;
    int count(int n){
        int c=0;
        while(n){
            c++;
            n/=10;
        }
        return c;
    }
    
    void findNum(int num, int n, int k){
        if(count(num)==n){
            ans.push_back(num);
            return ;
        }
        for(int i=0 ; i<=9 ; i++){
            int ld = num%10;
            if(abs(ld-i)==k){
                int number = num*10+i;
                findNum(number, n, k);
            }
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1 ; i<=9 ; i++){
            findNum(i, n, k);
        }
        return ans;
    }
};