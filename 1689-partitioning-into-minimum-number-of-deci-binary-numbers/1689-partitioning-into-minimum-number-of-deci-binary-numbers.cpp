class Solution {
public:
    int minPartitions(string n) {
        int num=0;
        for(char it: n){
            num = max(num, it-'0');
        }
        return num;
    }
};