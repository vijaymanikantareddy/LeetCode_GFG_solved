class Solution {
public:
    string losingPlayer(int x, int y) {
        string a = "Alice", b = "Bob";
        bool flag = true;
        while(x >= 1 && y >= 4){
            x -= 1;
            y -= 4;
            flag = !flag;
        }
        if(!flag) return a;
        return b;
    }
};