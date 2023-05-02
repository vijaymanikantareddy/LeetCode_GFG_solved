int reverse(int n){
    int sum=0;
        while(n){
            int d = n%10;
            if(sum<INT_MIN/10 || sum>INT_MAX/10)
                return 0;
            sum = sum*10 + d;
            n/=10;
        }
        return sum;
}